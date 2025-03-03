/*
 * led.c
 *
 *  Created on: Mar 1, 2025
 *      Author: user
 */

#include "led.h"



void LED_Toggle(void)
{

	    HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);

}
