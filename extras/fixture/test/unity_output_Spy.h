//- Copyright (c) 2010 James Grenning and Contributed to Unity Project
/* ==========================================
	Unity Project - A Test Framework for C
	Copyright (c) 2007 Mike Karlesky, Mark VanderVoord, Greg Williams
	[Released under a modified version of the MIT License.]
========================================== */

#ifndef D_unity_output_Spy_H
#define D_unity_output_Spy_H

void UnityOutputCharSpy_Create(int s);
void UnityOutputCharSpy_Destroy();
int  UnityOutputCharSpy_OutputChar(int c);
const char * UnityOutputCharSpy_Get();
void UnityOutputCharSpy_Enable(int enable);

#endif
