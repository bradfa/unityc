/*
 * Copyright (c) 2010 James Grenning and Contributed to Unity Project
 * Copyright (c) 2007 Mike Karlesky, Mark VanderVoord, Greg Williams
 * Released under a modified version of the MIT License
 */

#include "unity_fixture.h"
#include "unity_internals.h"
#include <string.h>

UNITY_FIXTURE_T UnityFixture;

/* For using function pointers */
int (*outputChar)(int) = putchar;

int verbose = 0;

void setUp(void) { /*does nothing*/ }
void tearDown(void) { /*does nothing*/ }

void announceTestRun(unsigned int runNumber)
{
	UnityPrint("Unity test run ");
	UnityPrintNumber(runNumber+1);
	UnityPrint(" of ");
	UnityPrintNumber(UnityFixture.RepeatCount);
	UNITY_OUTPUT_CHAR('\n');
}

int UnityMain(int argc, char *argv[], void (*runAllTests)())
{
	int result = UnityGetCommandLineOptions(argc, argv);
	unsigned int r;
	if (result != 0)
		return result;

	for (r = 0; r < UnityFixture.RepeatCount; r++)
	{
		announceTestRun(r);
		UnityBegin();
		runAllTests();
		UNITY_OUTPUT_CHAR('\n');
		UnityEnd();
	}

	return UnityFailureCount();
}

static int selected(const char *filter, const char *name)
{
	if (filter == 0)
		return 1;
	return strstr(name, filter) ? 1 : 0;
}

static int testSelected(const char *test)
{
	return selected(UnityFixture.NameFilter, test);
}

static int groupSelected(const char *group)
{
	return selected(UnityFixture.GroupFilter, group);
}

static void runTestCase()
{

}

void UnityTestRunner(unityfunction *setup,
		unityfunction *testBody,
		unityfunction *teardown,
		const char *printableName,
		const char *group,
		const char *name,
		const char *file, int line)
{
	if (testSelected(name) && groupSelected(group))
	{
		Unity.CurrentTestFailed = 0;
		Unity.TestFile = file;
		Unity.CurrentTestName = printableName;
		Unity.CurrentTestLineNumber = line;
		if (!UnityFixture.Verbose)
			UNITY_OUTPUT_CHAR('.');
		else
			UnityPrint(printableName);

		Unity.NumberOfTests++;
		UnityPointer_Init();

		runTestCase();
		if (TEST_PROTECT())
		{
			setup();
			testBody();
		}
		if (TEST_PROTECT())
		{
			teardown();
		}
		if (TEST_PROTECT())
		{
			UnityPointer_UndoAllSets();
		}
		UnityConcludeFixtureTest();
	}
}

void UnityIgnoreTest()
{
	Unity.NumberOfTests++;
	Unity.CurrentTestIgnored = 1;
	UNITY_OUTPUT_CHAR('!');
}

#include <stdlib.h>
#include <string.h>

/* Automatic pointer restoration functions */

typedef struct _PointerPair
{
	struct _PointerPair *next;
	void **pointer;
	void *old_value;
} PointerPair;

enum {MAX_POINTERS=50};
static PointerPair pointer_store[MAX_POINTERS];
static int pointer_index = 0;

void UnityPointer_Init()
{
	pointer_index = 0;
}

void UnityPointer_Set(void **pointer, void *newValue)
{
	if (pointer_index >= MAX_POINTERS)
		TEST_FAIL_MESSAGE("Too many pointers set");

	pointer_store[pointer_index].pointer = pointer;
	pointer_store[pointer_index].old_value = *pointer;
	*pointer = newValue;
	pointer_index++;
}

void UnityPointer_UndoAllSets()
{
	while (pointer_index > 0)
	{
		pointer_index--;
		*(pointer_store[pointer_index].pointer) =
			pointer_store[pointer_index].old_value;

	}
}

int UnityFailureCount()
{
	return Unity.TestFailures;
}

int UnityGetCommandLineOptions(int argc, char *argv[])
{
	int i;
	UnityFixture.Verbose = 0;
	UnityFixture.GroupFilter = 0;
	UnityFixture.NameFilter = 0;
	UnityFixture.RepeatCount = 1;

	if (argc == 1)
		return 0;

	for (i = 1; i < argc; )
	{
		if (strcmp(argv[i], "-v") == 0)
		{
			UnityFixture.Verbose = 1;
			i++;
		}
		else if (strcmp(argv[i], "-g") == 0)
		{
			i++;
			if (i >= argc)
				return 1;
			UnityFixture.GroupFilter = argv[i];
			i++;
		}
		else if (strcmp(argv[i], "-n") == 0)
		{
			i++;
			if (i >= argc)
				return 1;
			UnityFixture.NameFilter = argv[i];
			i++;
		}
		else if (strcmp(argv[i], "-r") == 0)
		{
			UnityFixture.RepeatCount = 2;
			i++;
			if (i < argc)
			{
				if (*(argv[i]) >= '0' && *(argv[i]) <= '9')
				{
					UnityFixture.RepeatCount = atoi(argv[i]);
					i++;
				}
			}
		}
	}
	return 0;
}

void UnityConcludeFixtureTest()
{
	if (Unity.CurrentTestIgnored)
	{
		Unity.TestIgnores++;
	}
	else if (!Unity.CurrentTestFailed)
	{
		if (UnityFixture.Verbose)
		{
			UnityPrint(" PASS");
			UNITY_OUTPUT_CHAR('\n');
		}
	}
	else if (Unity.CurrentTestFailed)
	{
		Unity.TestFailures++;
	}

	Unity.CurrentTestFailed = 0;
	Unity.CurrentTestIgnored = 0;
}

