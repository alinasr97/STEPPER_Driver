/*
 * STEPPER_Prog.c
 *
 * Created: 01-Mar-22 5:50:44 PM
 *  Author: lenovo
 */ 
#include "STEPPER_interface.h"

void STEPPER_Bipolar_CW(void)
{
	DIO_SetPinValue(PORT_D,COIL1A,HIGH);
	DIO_SetPinValue(PORT_D,COIL1B,LOW);
	DIO_SetPinValue(PORT_D,COIL2A,LOW);
	DIO_SetPinValue(PORT_D,COIL2B,LOW);
	_delay_ms(DELAY);
	DIO_SetPinValue(PORT_D,COIL1A,LOW);
	DIO_SetPinValue(PORT_D,COIL1B,LOW);
	DIO_SetPinValue(PORT_D,COIL2A,HIGH);
	DIO_SetPinValue(PORT_D,COIL2B,LOW);
	_delay_ms(DELAY);
	DIO_SetPinValue(PORT_D,COIL1A,LOW);
	DIO_SetPinValue(PORT_D,COIL1B,HIGH);
	DIO_SetPinValue(PORT_D,COIL2A,LOW);
	DIO_SetPinValue(PORT_D,COIL2B,LOW);
	_delay_ms(DELAY);
	DIO_SetPinValue(PORT_D,COIL1A,LOW);
	DIO_SetPinValue(PORT_D,COIL1B,LOW);
	DIO_SetPinValue(PORT_D,COIL2A,LOW);
	DIO_SetPinValue(PORT_D,COIL2B,HIGH);
	_delay_ms(DELAY);
}
void STEPPER_Bipolar_ACW(void)
{
	DIO_SetPinValue(PORT_D,COIL1A,LOW);
	DIO_SetPinValue(PORT_D,COIL1B,LOW);
	DIO_SetPinValue(PORT_D,COIL2A,LOW);
	DIO_SetPinValue(PORT_D,COIL2B,HIGH);
	_delay_ms(DELAY);
	DIO_SetPinValue(PORT_D,COIL1A,LOW);
	DIO_SetPinValue(PORT_D,COIL1B,HIGH);
	DIO_SetPinValue(PORT_D,COIL2A,LOW);
	DIO_SetPinValue(PORT_D,COIL2B,LOW);
	_delay_ms(DELAY);
	DIO_SetPinValue(PORT_D,COIL1A,LOW);
	DIO_SetPinValue(PORT_D,COIL1B,LOW);
	DIO_SetPinValue(PORT_D,COIL2A,HIGH);
	DIO_SetPinValue(PORT_D,COIL2B,LOW);
	_delay_ms(DELAY);
	DIO_SetPinValue(PORT_D,COIL1A,HIGH);
	DIO_SetPinValue(PORT_D,COIL1B,LOW);
	DIO_SetPinValue(PORT_D,COIL2A,LOW);
	DIO_SetPinValue(PORT_D,COIL2B,LOW);
	_delay_ms(DELAY);
}
void STEPPER_Bipolar_STOP(void)
{
	DIO_SetPinValue(PORT_D,COIL1A,LOW);
	DIO_SetPinValue(PORT_D,COIL1B,LOW);
	DIO_SetPinValue(PORT_D,COIL2A,LOW);
	DIO_SetPinValue(PORT_D,COIL2B,LOW);
}


void STEPPER_Unipolar_CW(void)
{
	
	DIO_SetPinValue(PORT_D,COIL1A,LOW);
	DIO_SetPinValue(PORT_D,COIL1B,HIGH);
	DIO_SetPinValue(PORT_D,COIL2A,LOW);
	DIO_SetPinValue(PORT_D,COIL2B,LOW);
	_delay_ms(DELAY);
	DIO_SetPinValue(PORT_D,COIL1A,LOW);
	DIO_SetPinValue(PORT_D,COIL1B,LOW);
	DIO_SetPinValue(PORT_D,COIL2A,HIGH);
	DIO_SetPinValue(PORT_D,COIL2B,LOW);
	_delay_ms(DELAY);
	DIO_SetPinValue(PORT_D,COIL1A,LOW);
	DIO_SetPinValue(PORT_D,COIL1B,LOW);
	DIO_SetPinValue(PORT_D,COIL2A,LOW);
	DIO_SetPinValue(PORT_D,COIL2B,HIGH);
	_delay_ms(DELAY);
	DIO_SetPinValue(PORT_D,COIL1A,HIGH);
	DIO_SetPinValue(PORT_D,COIL1B,LOW);
	DIO_SetPinValue(PORT_D,COIL2A,LOW);
	DIO_SetPinValue(PORT_D,COIL2B,LOW);
	_delay_ms(DELAY);
	
}
void STEPPER_Unipolar_ACW(void)
{
	DIO_SetPinValue(PORT_D,COIL1A,LOW);
	DIO_SetPinValue(PORT_D,COIL1B,LOW);
	DIO_SetPinValue(PORT_D,COIL2A,LOW);
	DIO_SetPinValue(PORT_D,COIL2B,HIGH);
	_delay_ms(DELAY);
	DIO_SetPinValue(PORT_D,COIL1A,LOW);
	DIO_SetPinValue(PORT_D,COIL1B,LOW);
	DIO_SetPinValue(PORT_D,COIL2A,HIGH);
	DIO_SetPinValue(PORT_D,COIL2B,LOW);
	_delay_ms(DELAY);
	DIO_SetPinValue(PORT_D,COIL1A,LOW);
	DIO_SetPinValue(PORT_D,COIL1B,HIGH);
	DIO_SetPinValue(PORT_D,COIL2A,LOW);
	DIO_SetPinValue(PORT_D,COIL2B,LOW);
	_delay_ms(DELAY);
	DIO_SetPinValue(PORT_D,COIL1A,HIGH);
	DIO_SetPinValue(PORT_D,COIL1B,LOW);
	DIO_SetPinValue(PORT_D,COIL2A,LOW);
	DIO_SetPinValue(PORT_D,COIL2B,LOW);
	_delay_ms(DELAY);
}
void STEPPER_Unipolar_STOP(void)
{
	DIO_SetPinValue(PORT_D,COIL1A,LOW);
	DIO_SetPinValue(PORT_D,COIL1B,LOW);
	DIO_SetPinValue(PORT_D,COIL2A,LOW);
	DIO_SetPinValue(PORT_D,COIL2B,LOW);
}

void STEPPER_Unipolar_CW_HS(void)
{
	DIO_SetPinValue(PORT_D,COIL1A,LOW);
	DIO_SetPinValue(PORT_D,COIL1B,HIGH);
	DIO_SetPinValue(PORT_D,COIL2A,LOW);
	DIO_SetPinValue(PORT_D,COIL2B,LOW);
	_delay_ms(DELAY);
	DIO_SetPinValue(PORT_D,COIL1A,LOW);
	DIO_SetPinValue(PORT_D,COIL1B,HIGH);
	DIO_SetPinValue(PORT_D,COIL2A,HIGH);
	DIO_SetPinValue(PORT_D,COIL2B,LOW);
	_delay_ms(DELAY);
	DIO_SetPinValue(PORT_D,COIL1A,LOW);
	DIO_SetPinValue(PORT_D,COIL1B,LOW);
	DIO_SetPinValue(PORT_D,COIL2A,HIGH);
	DIO_SetPinValue(PORT_D,COIL2B,LOW);
	_delay_ms(DELAY);
	DIO_SetPinValue(PORT_D,COIL1A,LOW);
	DIO_SetPinValue(PORT_D,COIL1B,LOW);
	DIO_SetPinValue(PORT_D,COIL2A,HIGH);
	DIO_SetPinValue(PORT_D,COIL2B,HIGH);
	_delay_ms(DELAY);
	DIO_SetPinValue(PORT_D,COIL1A,LOW);
	DIO_SetPinValue(PORT_D,COIL1B,LOW);
	DIO_SetPinValue(PORT_D,COIL2A,LOW);
	DIO_SetPinValue(PORT_D,COIL2B,HIGH);
	_delay_ms(DELAY);
	DIO_SetPinValue(PORT_D,COIL1A,HIGH);
	DIO_SetPinValue(PORT_D,COIL1B,LOW);
	DIO_SetPinValue(PORT_D,COIL2A,LOW);
	DIO_SetPinValue(PORT_D,COIL2B,HIGH);
	_delay_ms(DELAY);
	DIO_SetPinValue(PORT_D,COIL1A,HIGH);
	DIO_SetPinValue(PORT_D,COIL1B,LOW);
	DIO_SetPinValue(PORT_D,COIL2A,LOW);
	DIO_SetPinValue(PORT_D,COIL2B,LOW);
	_delay_ms(DELAY);
	DIO_SetPinValue(PORT_D,COIL1A,HIGH);
	DIO_SetPinValue(PORT_D,COIL1B,HIGH);
	DIO_SetPinValue(PORT_D,COIL2A,LOW);
	DIO_SetPinValue(PORT_D,COIL2B,LOW);
	_delay_ms(DELAY);
	
}
void STEPPER_Unipolar_ACW_HS(void)
{
	DIO_SetPinValue(PORT_D,COIL1A,LOW);
	DIO_SetPinValue(PORT_D,COIL1B,LOW);
	DIO_SetPinValue(PORT_D,COIL2A,LOW);
	DIO_SetPinValue(PORT_D,COIL2B,HIGH);
	_delay_ms(DELAY);
	DIO_SetPinValue(PORT_D,COIL1A,LOW);
	DIO_SetPinValue(PORT_D,COIL1B,LOW);
	DIO_SetPinValue(PORT_D,COIL2A,HIGH);
	DIO_SetPinValue(PORT_D,COIL2B,HIGH);
	_delay_ms(DELAY);
	DIO_SetPinValue(PORT_D,COIL1A,LOW);
	DIO_SetPinValue(PORT_D,COIL1B,LOW);
	DIO_SetPinValue(PORT_D,COIL2A,HIGH);
	DIO_SetPinValue(PORT_D,COIL2B,LOW);
	_delay_ms(DELAY);
	DIO_SetPinValue(PORT_D,COIL1A,LOW);
	DIO_SetPinValue(PORT_D,COIL1B,HIGH);
	DIO_SetPinValue(PORT_D,COIL2A,HIGH);
	DIO_SetPinValue(PORT_D,COIL2B,LOW);
	_delay_ms(DELAY);
	DIO_SetPinValue(PORT_D,COIL1A,LOW);
	DIO_SetPinValue(PORT_D,COIL1B,HIGH);
	DIO_SetPinValue(PORT_D,COIL2A,LOW);
	DIO_SetPinValue(PORT_D,COIL2B,LOW);
	_delay_ms(DELAY);
	DIO_SetPinValue(PORT_D,COIL1A,HIGH);
	DIO_SetPinValue(PORT_D,COIL1B,HIGH);
	DIO_SetPinValue(PORT_D,COIL2A,LOW);
	DIO_SetPinValue(PORT_D,COIL2B,LOW);
	_delay_ms(DELAY);
	DIO_SetPinValue(PORT_D,COIL1A,HIGH);
	DIO_SetPinValue(PORT_D,COIL1B,LOW);
	DIO_SetPinValue(PORT_D,COIL2A,LOW);
	DIO_SetPinValue(PORT_D,COIL2B,LOW);
	_delay_ms(DELAY);
	DIO_SetPinValue(PORT_D,COIL1A,HIGH);
	DIO_SetPinValue(PORT_D,COIL1B,LOW);
	DIO_SetPinValue(PORT_D,COIL2A,LOW);
	DIO_SetPinValue(PORT_D,COIL2B,HIGH);
	_delay_ms(DELAY);
	
}
void STEPPER_Unipolar_HS_STOP(void)
{
	DIO_SetPinValue(PORT_D,COIL1A,LOW);
	DIO_SetPinValue(PORT_D,COIL1B,LOW);
	DIO_SetPinValue(PORT_D,COIL2A,LOW);
	DIO_SetPinValue(PORT_D,COIL2B,LOW);
}
