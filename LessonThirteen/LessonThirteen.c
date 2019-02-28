/*
 * LessonThirteen.c
 *
 *  Created on: Feb 18, 2019
 *      Author: user
 */

#include <stdio.h>

int main(int argc, const char* argv[]){

	FILE *f;
	f = fopen("test.txt", "w");
	if (f == NULL)
		return 1;
	fprintf(f, "hello %s \n0", "lalala\n");
	fclose(f);

	f = fopen("test.txt", "r");
	char into[256];
	while (!feof(f)){
		fscanf(f, "%s", &into);
		printf("%s ", into);
	}
	fclose(f);

	return 0;
}
