/*
 * LessonEleven.c
 *
 *  Created on: Feb 18, 2019
 *      Author: user
 */


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void lalala(char* input, char* output){
	char welcome[256] = "hello, ";
	if (strcmp("eve", input) == 0){
		input = "Master";
	}
	strcat(welcome, input);
	strcpy(output, welcome);
}

int main (int argc, const char* argv[]){

	char charr[] = "это строка!";
	char* chpoint = "это тоже строка";

	printf("%s\n", charr);
	printf("%s\n", chpoint);


	charr[5] = 'X';
	printf("%s\n", charr);


	char name[256];
	char result[256];
	gets(name);
	puts(name);
	puts("");

	lalala(name, result);
	puts(result);
	return 0;
}

