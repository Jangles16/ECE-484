#include "__cf_project.h"
#ifndef RTW_HEADER_project_private_h_
#define RTW_HEADER_project_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "project.h"
#if !defined(rt_VALIDATE_MEMORY)
#define rt_VALIDATE_MEMORY(S, ptr)   if(!(ptr)) {\
  ssSetErrorStatus(rtS, RT_MEMORY_ALLOCATION_ERROR);\
  }
#endif
#if !defined(rt_FREE)
#if !defined(_WIN32)
#define rt_FREE(ptr)   if((ptr) != (NULL)) {\
  free((ptr));\
  (ptr) = (NULL);\
  }
#else
#define rt_FREE(ptr)   if((ptr) != (NULL)) {\
  free((void *)(ptr));\
  (ptr) = (NULL);\
  }
#endif
#endif
extern void RandSrcInitState_GZ ( const uint32_T seed [ ] , uint32_T state [
] , int32_T nChans ) ; extern void RandSrc_GZ_Z ( creal_T y [ ] , const
creal_T mean [ ] , int32_T meanLen , const real_T xstd [ ] , int32_T xstdLen
, uint32_T state [ ] , int32_T nChans , int32_T nSamps ) ; extern void
l4dxp3tr3f ( const InfoElementType l1u100cdku [ 60 ] , aikybtsj0j * localB ,
j5ctwrdnoe * localDW , hu3rgy0cv4 * localP ) ;
#if defined(MULTITASKING)
#error Model (project) was built in \SingleTasking solver mode, however the MULTITASKING define is \present. If you have multitasking (e.g. -DMT or -DMULTITASKING) \defined on the Code Generation page of Simulation parameter dialog, please \remove it and on the Solver page, select solver mode \MultiTasking. If the Simulation parameter dialog is configured \correctly, please verify that your template makefile is \configured correctly.
#endif
#endif
