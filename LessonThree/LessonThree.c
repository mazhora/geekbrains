/*
 * LessonThree.c
 *
 *  Created on: Feb 18, 2019
 *      Author: user
 */


 #include <stdio.h>


int main(int argc, const char* argv[]){
	char answer;
	printf("Do you watn to salute you? (y/n)\n");
	scanf("%c", &answer);
	if (answer == 'y') {
		printf("Hello, user!\n");
	} else if (answer == 'n') {
		printf("No\n");
	} else {
		printf("I can not understand your\n");
	}


	int a,b;
	a = 10;
	b = 15;
	a = (a>b)? b : a;
	printf("переменная a - %d \n", a);

	a = 20;
	a = (a>b)? b : a;
	printf("переменная a - %d \n", a);


	int lalala = 1 && 0;

	printf("eto lalala -  %d i eto %d \n", lalala, (1 || 0));

	int x;
	scanf("%d", &x);
	if (x < 10 && x > 0)
		printf("х между 0 и 10\n");
	else
		if (x < 0)
			printf("х отрицательный\n");
		else
			printf("х больше 10\n");

	printf("конец\n");



	return 0;
}
