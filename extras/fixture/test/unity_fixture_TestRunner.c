/*
 * Copyright (c) 2010 James Grenning and Contributed to Unity Project
 * Copyright (c) 2007 Mike Karlesky, Mark VanderVoord, Greg Williams
 * Released under a modified version of the MIT License
 */

#include "unity_fixture.h"

TEST_GROUP_RUNNER(UnityFixture)
{
	RUN_TEST_CASE(UnityFixture, PointerSetting);
	RUN_TEST_CASE(UnityFixture, ForceMallocFail);
	RUN_TEST_CASE(UnityFixture, ReallocSmallerIsUnchanged);
	RUN_TEST_CASE(UnityFixture, ReallocSameIsUnchanged);
	RUN_TEST_CASE(UnityFixture, ReallocLargerNeeded);
	RUN_TEST_CASE(UnityFixture, ReallocNullPointerIsLikeMalloc);
	RUN_TEST_CASE(UnityFixture, ReallocSizeZeroFreesMemAndReturnsNullPointer);
	RUN_TEST_CASE(UnityFixture, CallocFillsWithZero);
	RUN_TEST_CASE(UnityFixture, PointerSet);
}

TEST_GROUP_RUNNER(UnityCommandOptions)
{
	RUN_TEST_CASE(UnityCommandOptions, DefaultOptions);
	RUN_TEST_CASE(UnityCommandOptions, OptionVerbose);
	RUN_TEST_CASE(UnityCommandOptions, OptionSelectTestByGroup);
	RUN_TEST_CASE(UnityCommandOptions, OptionSelectTestByName);
	RUN_TEST_CASE(UnityCommandOptions, OptionSelectRepeatTestsDefaultCount);
	RUN_TEST_CASE(UnityCommandOptions, OptionSelectRepeatTestsSpecificCount);
	RUN_TEST_CASE(UnityCommandOptions, MultipleOptions);
	RUN_TEST_CASE(UnityCommandOptions, MultipleOptionsDashRNotLastAndNoValueSpecified);
}

TEST_GROUP_RUNNER(LeakDetection)
{
	RUN_TEST_CASE(LeakDetection, DetectsLeak);
	RUN_TEST_CASE(LeakDetection, BufferOverrunFoundDuringFree);
	RUN_TEST_CASE(LeakDetection, BufferOverrunFoundDuringRealloc);
}
