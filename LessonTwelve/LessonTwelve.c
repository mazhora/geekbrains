/*
 * LessonTwelve.c
 *
 *  Created on: Feb 18, 2019
 *      Author: user
 */


#include <stdio.h>

struct fraction {
	int integer;
	int divsible;
	int divisor;
};

typedef struct fraction Fr;

void printFr (Fr f) {
	if (f.divsible != 0) {
		if (f.integer == 0)
			printf("%d / %d\n", f.divsible, f.divisor);
		else
			printf("%d %d / %d\n",f.integer , f.divsible, f.divisor);
	} else {
		printf("%d", f.integer);
	}
}

void multiFr(Fr a1, Fr a2, Fr* a3){
	a3->integer = a1.integer * a2.integer;
	a3->divisor = a1.divisor * a2.divisor;
	a3->divsible = a1.divsible * a2.divsible;
}

int main(int argc, const char* argv[]){

	Fr f1,f2,result;
	f1.integer = 2;
	f1.divisor = 3;
	f1.divsible = 4;

	f2.integer = 2;
	f2.divisor = 4;
	f2.divsible = 3;

	printFr(f1);
	printFr(f2);

	multiFr(f1, f2, &result);
	printFr(result);

	return 0;
}
