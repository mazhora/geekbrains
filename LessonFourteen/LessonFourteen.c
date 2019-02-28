/*
 * LessonFourteen.c
 *
 *  Created on: Feb 18, 2019
 *      Author: user
 */

#include <stdio.h>
#define SIZE 10

int main(int argc, const char* argv[]){

	int* a = (int*)malloc(sizeof(int)*SIZE);
//	int* a = (int*)calloc(SIZE, sizeof(int));
	int array[SIZE];
	int i;
	for (i = 0; i < SIZE; i++) array[i] = i *10;
	for (i = 0; i < SIZE; i++) printf("%d ", array[i]);
	puts("");

	for (i = 0; i < SIZE; i++) *(a + i) = i *10;
	for (i = 0; i < SIZE; i++) printf("%d ", *(a + i));
	printf("\n");
//	free(a);
	int newsize = SIZE + 10;
	a = realloc(a, sizeof(int)*newsize);
	for (i = 0; i < newsize; i++) *(a + i) = i *10;
	for (i = 0; i < newsize; i++) printf("%d ", *(a + i));
	printf("\n");
	for (i = 0; i < SIZE; i++) printf("%d ", array[i]);
	printf("\n");
	free(a);
	for (i = 0; i < newsize; i++) printf("%d ", *(a + i));
	printf("\n");
	for (i = 0; i < SIZE; i++) printf("%d ", array[i]);
	printf("\n");


	return 0;
}
