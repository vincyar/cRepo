/*
 ============================================================================
 Name        : a.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(void) {
	setbuf(stdout,NULL);
	int num;
	double out;
	printf("Enter a number = ");
	scanf("%d", &num);

	out = sqrt(num);
	printf("The square root of %d is: %lf",num, out);
	return EXIT_SUCCESS;
}
