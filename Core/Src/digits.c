/*
 * digits.c
 *
 *  Created on: Nov 25, 2020
 *      Author: vladisvova
 */


#include "digits.h"
#include "main.h"

//TODO: dopln do lavicy funkcie

void setDigitOne(void){

	//LL_GPIO_ResetOutputPin(digit_0_GPIO_Port , digit_0_Pin);
	LL_GPIO_ResetOutputPin(digit_1_GPIO_Port , digit_1_Pin);
	LL_GPIO_ResetOutputPin(digit_2_GPIO_Port , digit_2_Pin);
	LL_GPIO_ResetOutputPin(digit_3_GPIO_Port , digit_3_Pin);

	LL_GPIO_SetOutputPin(digit_0_GPIO_Port , digit_0_Pin);
	//LL_GPIO_SetOutputPin(digit_1_GPIO_Port , digit_1_Pin);
	//LL_GPIO_SetOutputPin(digit_2_GPIO_Port , digit_2_Pin);
	//LL_GPIO_SetOutputPin(digit_3_GPIO_Port , digit_3_Pin);


}

void setDigitTwo(void){

	LL_GPIO_ResetOutputPin(digit_0_GPIO_Port , digit_0_Pin);
	//LL_GPIO_ResetOutputPin(digit_1_GPIO_Port , digit_1_Pin);
	LL_GPIO_ResetOutputPin(digit_2_GPIO_Port , digit_2_Pin);
	LL_GPIO_ResetOutputPin(digit_3_GPIO_Port , digit_3_Pin);

	//LL_GPIO_SetOutputPin(digit_0_GPIO_Port , digit_0_Pin);
	LL_GPIO_SetOutputPin(digit_1_GPIO_Port , digit_1_Pin);
	//LL_GPIO_SetOutputPin(digit_2_GPIO_Port , digit_2_Pin);
	//LL_GPIO_SetOutputPin(digit_3_GPIO_Port , digit_3_Pin);


}

void setDigitThree(void){

	LL_GPIO_ResetOutputPin(digit_0_GPIO_Port , digit_0_Pin);
	LL_GPIO_ResetOutputPin(digit_1_GPIO_Port , digit_1_Pin);
	//LL_GPIO_ResetOutputPin(digit_2_GPIO_Port , digit_2_Pin);
	LL_GPIO_ResetOutputPin(digit_3_GPIO_Port , digit_3_Pin);


	//LL_GPIO_SetOutputPin(digit_0_GPIO_Port , digit_0_Pin);
	//LL_GPIO_SetOutputPin(digit_1_GPIO_Port , digit_1_Pin);
	LL_GPIO_SetOutputPin(digit_2_GPIO_Port , digit_2_Pin);
	//LL_GPIO_SetOutputPin(digit_3_GPIO_Port , digit_3_Pin);


}


void setDigitFour(void){

	LL_GPIO_ResetOutputPin(digit_0_GPIO_Port , digit_0_Pin);
	LL_GPIO_ResetOutputPin(digit_1_GPIO_Port , digit_1_Pin);
	LL_GPIO_ResetOutputPin(digit_2_GPIO_Port , digit_2_Pin);
	//LL_GPIO_ResetOutputPin(digit_3_GPIO_Port , digit_3_Pin);


	//LL_GPIO_SetOutputPin(digit_0_GPIO_Port , digit_0_Pin);
	//LL_GPIO_SetOutputPin(digit_1_GPIO_Port , digit_1_Pin);
	//LL_GPIO_SetOutputPin(digit_2_GPIO_Port , digit_2_Pin);
	LL_GPIO_SetOutputPin(digit_3_GPIO_Port , digit_3_Pin);


}

