/*
 * LessonSix.c
 *
 *  Created on: Feb 18, 2019
 *      Author: user
 */

#include <stdio.h>
#include "header.h"


int main (int argc, const char* argv[]){

	int c,d;
	printf("enter digit: \n");
	scanf("%d", &c);
	printf("enter next digit: \n");
	scanf("%d", &d);
	printf ("summ is: %d", sum (c, d) );



	int input, res;
	printf("\nenter digit: \n");
	scanf("%d", &input);
	printf("\n");

	res = isPrime(input);
	printf("ВВеденное число %d является %sпростым\n", input , (res == 1) ? "" : "не ");

	return 0;
}
