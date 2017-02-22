/*
 * hello.c
 *
 *  Created on: Nov 13, 2016
 *      Author: ddubson
 */
#include <stdio.h>

int add(int x, int y);

main() {
	int sum;

	printf("Hello World!\n");
	sum = add(2,4);
	return 0;
}

int add(int x, int y) {
	return x + y;
}
