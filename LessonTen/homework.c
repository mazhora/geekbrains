/*
 * homework.c
 *
 *  Created on: Feb 25, 2019
 *      Author: user
 */



#include <stdio.h>
#include <math.h>

#define SA 10

/*
 * первое задание
 */


int calculateSqEq (int a, int b, int c, float* x1, float* x2){
	float disc;
	disc = (b*b) - 4*a*c;
	if (disc > 0) {
		*x1 = (-b - sqrt(disc))/(2*a);
		*x2 = (-b + sqrt(disc))/(2*a);
		return 1;
	} else if (disc == 0) {
		*x1 = *x2 = -b /2*a;
		return 0;
	} else{
		return -1;
	}
}

int multi_main (){

	int exitcode;
	float a = 10;
	float b = 7;
	float c = 12;
	float x1 = 0, x2 = 0;

	exitcode = calculateSqEq(a,b,c,&x1,&x2);
	printf("%06.3f\n", x1);
	printf("%06.3f\n", x2);
	printf("%d\n", exitcode);

	return exitcode;
}


/*
 * второе задание
 */

int checkArray(int *array, int size){
	int i = 0;
	int flag = 0;
	for (i=0; i < size; i++){
		if ( *(array + i) % 2 != 0){
			*(array + i) *= 2;
			flag = 1;
		}
	}
	return flag;
}


int multi_main2(){

	int i = 0;
	int array[SA] = {1,2,4,4,6,6,8,8,10,10};
//	int array[SA] = {1,2,3,4,5,6,7,8,9,10};
	while (i < SA){
		printf("%3d", array[i]);
		i++;
	}
	printf("\n");
	i = 0;
	if (checkArray(array,SA)){
		while (i < SA){
			printf("%3d", array[i]);
			i++;
		}
		printf("\nchange\n");
	}
	else {
		while (i < SA){
			printf("%3d", array[i]);
			i++;
		}
		printf("\nall ok\n");
	}
	return 0;
}

/*
 * третье задание
 */

void showLikeShort(int *b, int size){

	int i = 0;
	short *a = b;
	printf("%p\n", a);
	for (i=0; i < size *2 ; i++){
		printf(" %d ", *(a + i));
	}

}

int multi_main3(){
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	int i;
	int array3[SA] = {65535,65536,4,4,6,6,8,8,0,10};
	for (i=0; i < SA; i++){
		printf(" %d ", *(array3 + i));
	}
	printf("\n");
	printf("%p\n",  array3);
	showLikeShort(array3, SA);

	return 0;
}
