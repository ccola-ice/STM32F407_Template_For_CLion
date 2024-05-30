#include "bsp_systick.h"
#include "bsp_rcc.h"
#include "common.h"
#include "bsp_gpio_led.h"
#include "bsp_usart_debug.h"
#include "string.h"

int main(void)
{
    bsp_systick_init();
    bsp_usart_debug_config();
    BSP_LED_GPIO_Config();

    RCC_ClocksTypeDef clock;
    RCC_GetClocksFreq(&clock);

    while(1)
    {
        ////
        char data[80];
        memset(data,0, sizeof(data));
        sprintf(data,"SYSTEM CLK:%d\n AHB1CLK:%d\n",clock.SYSCLK_Frequency,clock.HCLK_Frequency);
        printf("%s\n",data);
    }
}


