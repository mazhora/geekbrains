/*
 * LessonFive.c
 *
 *  Created on: Feb 18, 2019
 *      Author: user
 */


#include <stdio.h>
#include <math.h>

int multi_main (int argc, const char* argv[]){

	int input, i , j, k;
	printf("enter digit: \n");
	scanf("%d", &input);
	printf("\n");
	j = 0;

	for (k = 1 ; k <= input ; k++ ) {

	for (i = 1 ; i <= k ; i++ ){
		if (k % i == 0)
			j++;
		else
			continue;

		if (j == 6)
			break;
	}

	if (j == 2)
	printf("ВВеденное число %d является %sпростым\n", k , (j <= 2) ? "" : "не ");
	j = 0;

	}


	int base = 0;
	int sign = 0;
	int n = 1;
	int sum = 1;
	printf("введиете основание: \n");
	scanf("%d", &base);
	printf("\n");
	printf("введиете степень: \n");
	scanf("%d", &sign);
	printf("\n");
	while (n<sign){
		sum *= base;
		n++;
	}
	printf("result: %d\n", sum);

	return 0;
}
