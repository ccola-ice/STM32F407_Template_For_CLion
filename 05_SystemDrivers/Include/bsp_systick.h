#ifndef _BSP_SYSTICK_H
#define _BSP_SYSTICK_H
#include "stm32f4xx.h"

void bsp_systick_init(void);
void delay_us(__IO uint32_t nTime);
void delay_ms(__IO uint32_t nTime);

#endif //_BSP_SYSTICK_H





























