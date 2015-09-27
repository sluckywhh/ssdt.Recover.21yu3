/*

  dbghelp.h

  Author: Chunhua Liu
  Last Updated: 2006-02-12

  This framework is generated by EasySYS 0.3.0
  This template file is copying from QuickSYS 0.3.0 written by Chunhua Liu

*/

#ifndef _DBGHELP_H
#define _DBGHELP_H 1

#include <ntddk.h>

#define dprintf if (DBG) DbgPrint
#define nprintf DbgPrint

#define kmalloc(_s)	ExAllocatePoolWithTag(NonPagedPool, _s, 'SYSQ')
//#define kfree(_p)	ExFreePoolWithTag(_p, 'SYSQ')
#define kfree(_p)	ExFreePool(_p)

#endif