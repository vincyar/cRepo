/*
 ============================================================================
 Name        : ArrayInputOutput.c
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

	int i,a[5];
	printf("enter 5 numbers");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}printf("You have entered values are ;");
	for(i=0;i<5;i++){
		printf("%d ",a[i]);
	}
	return EXIT_SUCCESS;
}
