/*
 * LessonTwo.c
 *
 *  Created on: Feb 18, 2019
 *      Author: user
 */

#include <stdio.h>

int main (int argc, const char* argv[]){
	printf("Hello world\n");
	printf("Это новая строка \tс табуляцией\n");

	float a = 99.69;
	char bb = "o";
	char b1 = "O";
	char b = "p";
	int integer = 15;


	printf("this is a variable%d\n", bb);
	printf("this is a variable%d\n", b1);
    printf("this is a variable%d\n", b);
	printf("this is a variable%6.2f%%", a);

	printf("address of var %p \n", &b);
	printf("address of var %p \n", integer);


	int input;
	printf("введите число \n");
	scanf("%d", &input);
	printf("ваше число находиться по адресу %p \n", &input);
	printf("ваше число dec %d \n", input);
	printf("ваше число hex %p \n", input);
	printf("ваше число a-la char %c \n", input);

	printf("а еще мы прибавим к нему 50 и 100 \n");
	input = input + 50;
	input += 100;
	printf("ваше число dec %d \n", input);

	printf("разделим целочисленно на 5 \n");

	int input1, input2;

	input1 = input / 5;
	input2 = input % 5;
    printf("ваше число dec %d c дробной частью %d \n", input1, input2);


	return 0;
}
