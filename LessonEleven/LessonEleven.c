/*
 * LessonEleven.c
 *
 *  Created on: Feb 18, 2019
 *      Author: user
 */


#include <stdio.h>

char* lalala(){
	return "Hello";
}

int main (int argc, const char* argv[]){

	char charr[256] = "это строка!";
	char* chpoint = "это тоже строка";

	printf("%s\n", charr);
	printf("%s\n", chpoint);


	charr[5] = 'X';
	printf("%s\n", charr);


	printf("%s\n", lalala());
        
	return 0;
}

