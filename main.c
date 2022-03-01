#include <avr/io.h>
#define F_CPU 8000000UL
#include <util/delay.h>
#include "UTILS.h"
#include "STD_TYPES.h"
#include "DIO_Interface.h"
#include "STEPPER_interface.h"

int main(void)
{
	DIO_SetPortDirection(PORT_D,OUTPUT);
	
	u8 i;
	while (1)
	{
			STEPPER_Unipolar_CW();	
	}
}
