/*
 * header.h
 *
 *  Created on: Feb 22, 2019
 *      Author: user
 */

#ifndef HEADER_H_
#define HEADER_H_

int isPrime(int inp){
	int i,j;
	j=0;
	for (i = 1 ; i <= inp ; i++ ){
		if (inp % i == 0)
			j++;
		else
			continue;

		if (j == 3)
			break;
	}

	return (j <= 2) ? 1 : 0;
}

int sum (int a, int b){
	int result;
	result = a + b;
	return result;
}

#endif /* HEADER_H_ */
