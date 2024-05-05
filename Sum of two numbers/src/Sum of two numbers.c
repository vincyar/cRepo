/*
 ============================================================================
 Name        : Sum.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	float a,b,c,sum;
	printf("Enter 3 numbers");
	scanf("%f%f%f",&a,&b,&c);
	sum=a+b+c;
	printf("Result is = %f",sum);
	return EXIT_SUCCESS;
}
