/*
 * LessonSeven.c
 *
 *  Created on: Feb 18, 2019
 *      Author: user
 */

#include <stdio.h>


void swap(int * x, int * y){

	*x = *x ^ *y;
	*y = *y ^ *x;
	*x = *x ^ *y;
}


int main (int argc, const char* argv[]){

	/*
	int c,d;
	printf("enter digit: \n");
	scanf("%d", &c);
	printf("enter next digit: \n");
	scanf("%d", &d);

*/
	int c;
	c = 50;

	printf("value of c is %d \n", c);
	printf("address of c is \t %p \n", &c);

	int * pointer;
	pointer = &c;

	printf("value of c pointer is \t %p \n", pointer);
	printf("value of pointer address is %d \n", *pointer);


	int a,b;
	a = 50;
	b = 100;

	printf("a = %d and b = %d\n", a,b);

	swap(&a,&b);

	printf("a = %d and b = %d\n", a,b);

	return 0;
}
