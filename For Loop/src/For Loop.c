/*
 ============================================================================
 Name        : For.c
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
	int i,n;
	printf("Enter a number to print all numbers until that number");
	scanf("%d",&n);
	for(i=1;i<(n+1);i++){
		printf("%d\n",i);
	}
	return EXIT_SUCCESS;
}
