 /******************************************************************************
 *
 * Module: Seven Segment
 *
 * File Name: seven_segment.h
 *
 * Description: Header file for seven segment driver
 *
 * Author: Mohamed Hossam
 *
 *******************************************************************************/

#ifndef SEVEN_SEGMENT_H_
#define SEVEN_SEGMENT_H_

#include"std_types.h"

 /******************************************************************************
 *								  Definitions
 *******************************************************************************/
/* seven segment pins configuration */
#define SEVEN_SEG_PORT_ID PORTC_ID
#define SEVEN_SEG_PIN_ID  PIN4_ID
 /******************************************************************************
 *							 Functions Declarations
 *******************************************************************************/

/*
 * Description : a function to initialize the pins of the seven segment
 */
void SevenSeg_init();

/*
 * Description : a function to display a number on the seven segment
 */
void SevenSeg_displayNumber(uint8 num);
#endif /* SEVEN_SEGMENT_H_ */
