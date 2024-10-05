#include "tim.h"


#include "main.h"
#include "stm32f4xx.h"

int PWM_FLAG=0;
void HAL_GPIO_EXTI_Callback(uint16_t GPIO_PIN)
{
    if (GPIO_PIN == KEY_G_Pin)
    {
        if(PWM_FLAG == 0)
        {
            HAL_TIM_PWM_Start_IT(&htim1, TIM_CHANNEL_2);
            PWM_FLAG = 1;
        }
        else
        {
            HAL_TIM_PWM_Stop_IT(&htim1, TIM_CHANNEL_2);
            PWM_FLAG = 0;
        }
        HAL_GPIO_TogglePin(GPIOF, GPIO_PIN_14);
    }


}