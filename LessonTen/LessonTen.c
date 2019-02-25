/*
 * LessonTen.c
 *
 *  Created on: Feb 18, 2019
 *      Author: user
 */

#include <math.h>
#include <stdio.h>
#define SIZE 11

int multi_main();
int multi_main2();
int multi_main3();

int main (int argc, const char* argv[]){

	int i, j;
	int array[SIZE][SIZE];
	for (i=1; i < SIZE; i++){
		for (j=1; j < SIZE; j++){
			array[i][j] = i * j;
		}
	}
	for (i=0; i < SIZE; i++){
		array[i][0] = i;
		array[0][i] = i;
	}
	for (i=0; i < SIZE; i++){
		for (j=0; j < SIZE; j++){
			printf("%4d", array[i][j]);
		}
		printf("\n");
	}

	multi_main();
	multi_main2();
	multi_main3();
	return 0;
}
