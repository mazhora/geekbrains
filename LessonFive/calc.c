/*
 * calc.c
 *
 *  Created on: Feb 22, 2019
 *      Author: user
 */

#include <stdio.h>

int calc (int argc, const char* argv[]){

	float firts, second;
	int operator;

	printf("enter first operand: \n");
	scanf("%f", &firts);

	printf("выберите действие: 1 + , 2 - , 3 * , 4 / \n");
	scanf("%d", &operator);
	if (operator == 4){
		do {
		printf("enter second operand: \n");
		scanf("%f", &second);
		} while (second == 0);
	}
	switch (operator){
	case 1:
		printf("result: %f\n", firts + second);
		break;
	case 2:
		printf("result: %f\n", firts - second);
		break;
	case 3:
		printf("result: %f\n", firts * second);
		break;
	case 4:
		printf("result: %f\n", firts / second);
		break;
	default:
		printf("unknown operator");

	}



	return 0;
}

