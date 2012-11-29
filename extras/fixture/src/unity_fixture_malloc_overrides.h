//- Copyright (c) 2010 James Grenning and Contributed to Unity Project
/* ==========================================
	Unity Project - A Test Framework for C
	Copyright (c) 2007 Mike Karlesky, Mark VanderVoord, Greg Williams
	[Released under MIT License. Please refer to license.txt for details]
========================================== */

#ifndef UNITY_FIXTURE_MALLOC_OVERRIDES_H_
#define UNITY_FIXTURE_MALLOC_OVERRIDES_H_

#define malloc  unity_malloc
#define calloc  unity_calloc
#define realloc unity_realloc
#define free	unity_free

#endif /* UNITY_FIXTURE_MALLOC_OVERRIDES_H_ */
