/*
 * homework.c
 *
 *  Created on: Feb 28, 2019
 *      Author: user
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

/*
 * первое задание
 */

void a10to2(int a, char* b) {

	int temp = a;
	int i = 0;
	char out[256];

	while (temp != 0){
		temp = temp >> 1;
		i++;
	}

	out[i] = '\0';

	while(a>0){
		out[--i] = (a % 2) ? '1' : '0';
		a /= 2;
	}

	strcat(b, out);

}

int main2(int argc, const char* argv[]){

	char str[256] = "b";
	int a;
	scanf("%d", &a);
	printf("%d\n", a);
	printf("Двоичный вид:\n");


	a10to2(a, str);

	puts(str);

	return 0;
}

/*
 * 2 задание
 */


struct rectangle{
	int dl;
	int sh;
	int per;
	int s;
};

typedef struct rectangle re;

void sAndPer(re* a){
	a->per = 2*(a->dl + a->sh);
	a->s = a->dl * a->sh;
}

int main3(int argc, const char* argv[]){

	re o1;
	o1.dl=3;
	o1.sh=4;

	sAndPer(&o1);

	printf("\n");
	printf("s = %d\n", o1.s);
	printf("per = %d\n", o1.per);

	return 0;
}


/*
 * третье задание
 */

int* inrarr(int a){

//	int* u = (int*)malloc(sizeof(int)*a);
	int* u = calloc(a, sizeof(int));

	return u;
}


int main4(int argc, const char* argv[]){

	int i;
	int size = 14;
	int* arr = inrarr(size);

	for(i=0;i<size;i++) printf("%d ", arr[i]);
	printf("\n");

	return 0;
}


/*
 * четвертое задание
 */

struct point {
	int x;
	int y;
};

typedef struct point po;

struct line {
	int lenght;
	po p1;
	po p2;
};

typedef struct line li;

li lenghtLi(po a, po b){

	li line;
	b.x -= a.x;
	b.y -= a.y;

	line.lenght = sqrt(pow(b.x,2) + pow(b.y,2));

	return line;
}

int main5(int argc, const char* argv[]){

	po a,b;
	puts("Первая точка:");
	puts("введите Х:");
	scanf("%d", &a.x);
	printf("\n");
	puts("введите Y:");
	scanf("%d", &a.y);
	printf("\n");

	puts("Вторая точка:");
	puts("введите Х:");
	scanf("%d", &b.x);
	printf("\n");
	puts("введите Y:");
	scanf("%d", &b.y);
	printf("\n");

	li l = lenghtLi(a, b);
	puts("длинна:");
	printf("%d", l.lenght);


	return 0;
}










