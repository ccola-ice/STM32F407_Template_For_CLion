//
// Created by Cola on 2024/5/29.
//
#ifndef _BSP_GPIO_LED_H
#define _BSP_GPIO_LED_H
#include "stm32f4xx.h"

//LED1
#define LED1_PIN                  GPIO_Pin_2
#define LED1_GPIO_PORT            GPIOB
#define LED1_GPIO_CLK             RCC_AHB1Periph_GPIOB

#define LED_ON  0
#define LED_OFF 1

#define LED1(a)	    if (a)	\
					GPIO_SetBits(LED1_GPIO_PORT,LED1_PIN);\
					else		\
					GPIO_ResetBits(LED1_GPIO_PORT,LED1_PIN)

void BSP_LED_GPIO_Config(void);

#endif //_BSP_GPIO_LED_H
