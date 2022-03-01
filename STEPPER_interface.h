/*
 * STEPPER_interface.h
 *
 * Created: 01-Mar-22 5:50:23 PM
 *  Author: lenovo
 */ 


#ifndef STEPPER_INTERFACE_H_
#define STEPPER_INTERFACE_H_

#define F_CPU 8000000UL
#include <util/delay.h>
#include "STD_TYPES.h"
#include "UTILS.h"
#include "DIO_Interface.h"

/***************** Pin Config******************/
//PORTD

#define COIL1A    PIN0
#define COIL1B    PIN1
#define COIL2A    PIN2
#define COIL2B    PIN3

#define DELAY 800
/***********************************************/

void STEPPER_Bipolar_CW(void);
void STEPPER_Bipolar_ACW(void);
void STEPPER_Bipolar_STOP(void);

void STEPPER_Unipolar_CW(void);
void STEPPER_Unipolar_ACW(void);
void STEPPER_Unipolar_STOP(void);

void STEPPER_Unipolar_CW_HS(void);
void STEPPER_Unipolar_ACW_HS(void);
void STEPPER_Unipolar_HS_STOP(void);


#endif /* STEPPER_INTERFACE_H_ */