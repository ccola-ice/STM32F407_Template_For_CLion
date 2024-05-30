//
// Created by Cola on 2024/5/29.
//
#ifndef _BSP_RCC_H
#define _BSP_RCC_H
#include "stm32f4xx.h"
#include "stm32f4xx_rcc.h"

void HSE_SetSysClock(uint32_t m, uint32_t n, uint32_t p, uint32_t q);
void HSI_SetSysClock(uint32_t m, uint32_t n, uint32_t p, uint32_t q);
void MCO1_GPIO_Config(void);
void MCO2_GPIO_Config(void);

#endif //_BSP_RCC_H
