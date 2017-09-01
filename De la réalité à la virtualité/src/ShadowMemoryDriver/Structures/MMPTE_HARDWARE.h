/* 
Copyright (c) FRET.  All rights reserved.

File Name : MMPTE_HARDWARE.h

Abstract:
Memory Manager Page Table Entry Hardware structure.

Author: FRET ( www.binary-reverser.org)
Documented by : Neitsa

Version : 04
Last Update : 2-Sep-2006 
*/

#ifndef _MMPTE_HARDWARE_H_INCLUDED
#define _MMPTE_HARDWARE_H_INCLUDED

#ifndef MMPTE_HARDWARE_INCLUDED
#define MMPTE_HARDWARE_INCLUDED

typedef struct _MMPTE_HARDWARE
{
	ULONG 	Valid : 1;			//0, +0x000
	ULONG 	Write : 1;			//1, +0x000
	ULONG 	Owner : 1;			//2, +0x000
	ULONG 	WriteThrough : 1;	//3, +0x000
	ULONG 	CacheDisable : 1;	//4, +0x000
	ULONG 	Accessed : 1;		//5, +0x000
	ULONG 	Dirty : 1;			//6, +0x000
	ULONG 	LargePage : 1;		//7, +0x000
	ULONG 	Global : 1;			//8, +0x000
	ULONG 	CopyOnWrite : 1;	//9, +0x000
	ULONG 	Prototype : 1;		//10, +0x000
	ULONG 	reserved : 1;		//11, +0x000
	ULONG 	PageFrameNumber : 20;//12, +0x000
} MMPTE_HARDWARE, *PMMPTE_HARDWARE, **PPMMPTE_HARDWARE;

#endif //_INCLUDED
#endif //_H_INCLUDED