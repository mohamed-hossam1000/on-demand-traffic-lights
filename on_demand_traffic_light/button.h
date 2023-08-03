/*******************************************************************************
 *
 * Module: button
 *
 * File Name: button.h
 *
 * Description: header file for button driver
 *
 * Author: Mohamed Hossam
 *
 *******************************************************************************/

#include"std_types.h"

#ifndef BUTTON_H_
#define BUTTON_H_

/*******************************************************************************
 *									Definitions
 *******************************************************************************/
/* button pin configuration */
#define BUTTON_PORT_ID   PORTD_ID
#define BUTTON_PIN_ID    PIN2_ID

#define BUTTON_PRESSED   LOGIC_LOW
#define BUTTON_RELEASED  LOGIC_HIGH

/*******************************************************************************
 *							   Functions Declarations
 *******************************************************************************/
/*
 * Description : a function to initialize the button pin
 */
void Button_init();

/*
 * Description : a function to check if the button pressed or not
 */
uint8 Button_getStatus();

#endif /* BUTTON_H_ */
