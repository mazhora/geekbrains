/*
 * LessonEight.c
 *
 *  Created on: Feb 18, 2019
 *      Author: user
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ARRAY_LENGHT 10
#define NUMBERS 1000000

int main (int argc, const char* argv[]){


	int array[50];
	array[0] = 0;
	array[1] = 1;
	array[2] = 2;
	array[3] = 3;

	int arr[5] = {0,1,2,3,4};

	printf("%d", arr[9]);

	int a,i;
	int frenq[ARRAY_LENGHT] = {0};

	srand(time(NULL));
	for (i=0; i<=NUMBERS; i++){
		a = rand() % ARRAY_LENGHT;
		frenq[a]++;
	}

	for ( i = 0 ; i < ARRAY_LENGHT; i++ ) {
		printf("\nчисло %d встречается %6d раз (%5.2f%%) ", i, frenq[i], ( 100 * (float)frenq[i]) / NUMBERS );
	}

	return 0;
}
