/******************************************************************************
 * File Name   : stm32l03xx_ll.c
 * Date        : 17/01/2018 12:00:00
 * Description : This file provokes a build error, when C Preprocessor definition
 *               "USE_FULL_LL_DRIVER" is missing for enabled LL Drivers
 ******************************************************************************/
#include "RTE_Components.h"

#ifdef  RTE_DEVICE_LL_DRIVERS_USED
#ifndef USE_FULL_LL_DRIVER
  #error "Add C Preprocessor define USE_FULL_LL_DRIVER."
#endif
#endif
