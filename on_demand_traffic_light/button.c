/*******************************************************************************
 *
 * Module: button
 *
 * File Name: button.c
 *
 * Description: source file for button driver
 *
 * Author: Mohamed Hossam
 *
 *******************************************************************************/

#include"button.h"
#include"gpio.h"

void Button_init()
{
	GPIO_setupPinDirection(BUTTON_PORT_ID, BUTTON_PIN_ID, PIN_INPUT);
}

uint8 Button_getStatus()
{
	return GPIO_readPin(BUTTON_PORT_ID, BUTTON_PIN_ID);
}
