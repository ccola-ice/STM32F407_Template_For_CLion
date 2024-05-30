#ifndef _BSP_USART_DEBUG_H
#define	_BSP_USART_DEBUG_H
#include "stm32f4xx.h"
#include <stdio.h>

#if 1
//引脚定义
/*******************************************************/
#define DEBUG_USART                             USART1
#define DEBUG_USART_CLK                         RCC_APB2Periph_USART1
#define DEBUG_USART_BAUDRATE                    115200  //串口波特率

#define DEBUG_USART_RX_GPIO_PORT                GPIOA
#define DEBUG_USART_RX_GPIO_CLK                 RCC_AHB1Periph_GPIOA
#define DEBUG_USART_RX_PIN                      GPIO_Pin_10
#define DEBUG_USART_RX_AF                       GPIO_AF_USART1
#define DEBUG_USART_RX_SOURCE                   GPIO_PinSource10

#define DEBUG_USART_TX_GPIO_PORT                GPIOA
#define DEBUG_USART_TX_GPIO_CLK                 RCC_AHB1Periph_GPIOA
#define DEBUG_USART_TX_PIN                      GPIO_Pin_9
#define DEBUG_USART_TX_AF                       GPIO_AF_USART1
#define DEBUG_USART_TX_SOURCE                   GPIO_PinSource9

#define DEBUG_USART_IRQHandler                  USART1_IRQHandler
#define DEBUG_USART_IRQ                 		USART1_IRQn
/*******************************************************/
#endif


#if 0
//引脚定义
/*******************************************************/
#define DEBUG_USART                             USART3
#define DEBUG_USART_CLK                         RCC_APB1Periph_USART3
#define DEBUG_USART_BAUDRATE                    115200  //串口波特率

#define DEBUG_USART_RX_GPIO_PORT                GPIOD
#define DEBUG_USART_RX_GPIO_CLK                 RCC_AHB1Periph_GPIOD
#define DEBUG_USART_RX_PIN                      GPIO_Pin_9
#define DEBUG_USART_RX_AF                       GPIO_AF_USART3
#define DEBUG_USART_RX_SOURCE                   GPIO_PinSource9

#define DEBUG_USART_TX_GPIO_PORT                GPIOD
#define DEBUG_USART_TX_GPIO_CLK                 RCC_AHB1Periph_GPIOD
#define DEBUG_USART_TX_PIN                      GPIO_Pin_8
#define DEBUG_USART_TX_AF                       GPIO_AF_USART3
#define DEBUG_USART_TX_SOURCE                   GPIO_PinSource8

#define DEBUG_USART_IRQHandler                  USART3_IRQHandler
#define DEBUG_USART_IRQ                 		USART3_IRQn
/*******************************************************/
#endif


#if 0
//引脚定义
/*******************************************************/
#define DEBUG_USART                             USART6
#define DEBUG_USART_CLK                         RCC_APB2Periph_USART6
#define DEBUG_USART_BAUDRATE                    115200  //串口波特率

#define DEBUG_USART_RX_GPIO_PORT                GPIOC
#define DEBUG_USART_RX_GPIO_CLK                 RCC_AHB1Periph_GPIOC
#define DEBUG_USART_RX_PIN                      GPIO_Pin_7
#define DEBUG_USART_RX_AF                       GPIO_AF_USART6
#define DEBUG_USART_RX_SOURCE                   GPIO_PinSource7

#define DEBUG_USART_TX_GPIO_PORT                GPIOC
#define DEBUG_USART_TX_GPIO_CLK                 RCC_AHB1Periph_GPIOC
#define DEBUG_USART_TX_PIN                      GPIO_Pin_6
#define DEBUG_USART_TX_AF                       GPIO_AF_USART6
#define DEBUG_USART_TX_SOURCE                   GPIO_PinSource6

#define DEBUG_USART_IRQHandler                  USART6_IRQHandler
#define DEBUG_USART_IRQ                 		USART6_IRQn
/*******************************************************/
#endif

void bsp_usart_debug_config(void);
void Usart_SendByte( USART_TypeDef * pUSARTx, uint8_t ch);
void Usart_SendString( USART_TypeDef * pUSARTx, char *str);
void Usart_SendHalfWord( USART_TypeDef * pUSARTx, uint16_t ch);



#endif /* _BSP_USART_DEBUG_H */


