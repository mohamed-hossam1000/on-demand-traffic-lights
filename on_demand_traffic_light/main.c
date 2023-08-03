 /******************************************************************************
 *
 * Project : On Demand Traffic Light
 *
 * File Name: main.c
 *
 * Description:
 *
 * Author: Mohamed Hossam
 *
 *******************************************************************************/

#include<avr/io.h>
#include<util/delay.h>
#include"traffic_light.h"
#include"button.h"

int main()
{
	/* initializing the traffic lights and button modules */
	TrafficLight_init();
	Button_init();
	/* enabling interrupts through the global I bit */
	SREG|=(1<<7);
	for(;;)
	{
		if(Button_getStatus() == BUTTON_PRESSED )
		{
			/* small delay to avoid debouncing issues */
			_delay_ms(30);
			/* check if the button is pressed and check the state of the traffic light
			 * long pressing and double pressing don't make a difference because
			 * the state of the traffic light changes after detecting the first press */
			if(Button_getStatus() == BUTTON_PRESSED && TrafficLight_currentLight == GREEN)
			{
				TrafficLight_switchLight();
			}
		}
	}
}
