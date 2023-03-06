// Description----------------------------------------------------------------|
/*
 *
 */
// DEFINES AND INCLUDES-------------------------------------------------------|

#define STM32F051												   //COMPULSORY
#include "stm32f0xx.h"											   //COMPULSORY
#include "lcd_stm32f0.h"
#include <stdio.h>

// GLOBAL VARIABLES ----------------------------------------------------------|
struct age_data{
	uint8_t day;
	uint8_t month;
	uint16_t year;
	uint8_t age;
}my_age;



// FUNCTION DECLARATIONS -----------------------------------------------------|

void main(void);
void delay(unsigned int ms);//COMPULSORY

// MAIN FUNCTION -------------------------------------------------------------|

void main(void)
{	my_age.day=15;
	my_age.month=2;
	my_age.year=2000;
	my_age.age=23;
	init_LCD();
	char lcd_str[1];


	while(1)
	{
		for(uint8_t i=0; i<=my_age.age;i++){
			delay(65000);
			sprintf(lcd_str, "%d", i);
			lcd_putstring(lcd_str);
			delay(65000);
			lcd_command(CLEAR);
		}

	}
}

// OTHER FUNCTIONS -----------------------------------------------------------|


