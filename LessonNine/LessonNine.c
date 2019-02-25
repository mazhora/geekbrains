/*
 * LessonNine.c
 *
 *  Created on: Feb 18, 2019
 *      Author: user
 */


#include <stdio.h>
#define SIZE 10

void printArray(int *array, int lenght){
	int i;
	for (i=0; i < lenght; i++){
		printf("%d = ", i);
		printf("%d\n", *(array + i));
	}
}

float averge(int *array, int lenght){
	float result = 0;
	int i;
	for (i=0; i < lenght; i++){
		result += *(array + i);
	}
	return result / lenght;
}

int main (int argc, const char* argv[]){

	int array[SIZE];

	int i = 0;
	float result = 0;

	while (i<SIZE){
		printf("введите число:\n");
		scanf("%d", array + i);
		i++;
	}
	printf("\nсреднее арифметическое: \n");
	for (i=0; i < SIZE; i++){
		printf("%d = ", i);
		printf("%d\n", array[i]);
		result += *(array + i);
	}
	printf("\n%f\n", result / SIZE);
	printf("\n============\n");
	printArray(array, SIZE);
	printf("\n%f\n", averge(array, SIZE));
	return 0;
}
