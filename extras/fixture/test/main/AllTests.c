/*
 * Copyright (c) 2010 James Grenning and Contributed to Unity Project
 * Copyright (c) 2007 Mike Karlesky, Mark VanderVoord, Greg Williams
 * Released under a modified version of the MIT License
 */

#include "unity_fixture.h"

static void runAllTests()
{
	RUN_TEST_GROUP(UnityFixture);
	RUN_TEST_GROUP(UnityCommandOptions);
	RUN_TEST_GROUP(LeakDetection)
}

int main(int argc, char* argv[])
{
	return UnityMain(argc, argv, runAllTests);
}

