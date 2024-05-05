/*
 ============================================================================
 Name        : Larger.c
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
	int a,b;
	printf("Enter 2 numbers");
	scanf("%d%d",&a,&b);
	if(a>b){
		printf("%d is the larger number than %d",a,b);
	}else{
		printf("%d is the larger number than %d",b,a);
	}
	return EXIT_SUCCESS;
}
