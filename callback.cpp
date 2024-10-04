#include "stm32f4xx_hal.h"
#include "main.h"
#include "stm32f4xx_hal_tim.h"
#include "tim.h"

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
    if (htim->Instance == htim8.Instance)
    {
        HAL_GPIO_TogglePin(GPIOF, GPIO_PIN_14);
    }
}