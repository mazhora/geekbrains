/*
 * homework.c
 *
 *  Created on: Feb 21, 2019
 *      Author: user
 */

#include <stdio.h>

int main (int argc, const char* argv[]){

	/*
	 * Uo = Ui * (R1 / (R2 + R1)).
	 * Ui = ...;
	 * R1 = ...;
	 * R2 = ...;
	 */

	float Ui, R1, R2, Uo;

	Ui = (Uo * (R2 + R1)) / R1;
	// R1 =

	int input;
	printf("enter digit: \n");
	scanf("%d", &input);
	if (input > 0 && input < 100)
		printf("чесло входит в диапазон от 0 до 100");
	else
		printf("чесло не входит в диапазон от 0 до 100");

	int counter = 0;
	float lalala = 0;
	while (counter < 10) {
		int l;
		printf("enter digit: \n");
		scanf("%d", &l);
		lalala += l;
		counter++;
	}
	printf("среднее арифметические чисел равно %f\n", lalala / 10);

	int hight;
	printf("труегольник\n");
	printf("введите высоту в строках: \n");
	scanf("%d", &hight);
	int i, j;
	for (i = 0; i < hight; i++){
		for (j = 1; j < (hight - i); j++)
			printf(" ");
		for (j = (hight - i); j <= hight;j++)
			printf("^");
		printf("\n");
	}

	return 0;
}

