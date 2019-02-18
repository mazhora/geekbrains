/*
 * LessonTwo.c
 *
 *  Created on: Feb 18, 2019
 *      Author: user
 */

 #include <stdio.h>


int main(int argc, const char* argv[]){
	char answer;
	printf("Do you watn to salute you? (y/n)");
	scanf("%c", &answer);
	if (answer == 'y') {
		printf("Hello, user!");
	} else if (answer == 'n') {
		printf("No");
	} else {
		printf("I can not understand your");
	}
	return 0;
}
