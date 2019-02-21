/*
 * LessonFour.c
 *
 *  Created on: Feb 18, 2019
 *      Author: user
 */


#include <stdio.h>

int main (int argc, const char* argv[]){

	int a, b;
	a = 10;
	b = 20;
	int count = 0;
	while (a < b) {
		if ( (a % 2) == 0)
			count++;
		printf("%d\n", a);
		a++;
	}
	printf("всего четных %d\n", count);

	int digit;
	do {
		printf("введите число на которое нужно разделить 100\n");
		scanf("%d", &digit);
	} while ( digit == 0);
	printf("100 / %d = %d\n", digit,  100 / digit);
	printf("остаток от деления %d\n", 100 % digit);



	return 0;
}
