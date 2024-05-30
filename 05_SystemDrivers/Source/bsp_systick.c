#include "bsp_systick.h"

static volatile u32 TimingDelay;

void bsp_systick_init(void)
{
    /* SystemFrequency / 1000    1ms
     * SystemFrequency / 100000	 10us
     * SystemFrequency / 1000000 1us
     */
    if (SysTick_Config(SystemCoreClock / 1000000))
    {
        /* Capture error */
        while (1);
    }
}

void delay_us(__IO uint32_t nTime)
{
    TimingDelay = nTime;

    while(TimingDelay != 0);
}

void delay_ms(__IO uint32_t nTime)
{
    delay_us(1000 * nTime);
}

////
void TimingDelay_Decrement(void)
{
    if (TimingDelay != 0x00)
    {
        TimingDelay--;
    }
}
