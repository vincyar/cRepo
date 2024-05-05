/*
 ============================================================================
 Name        : Function.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int sum();
int main(void) {
	setbuf(stdout,NULL);
	int result;
	result=sum();
	printf("Result is : %d",result);
	return EXIT_SUCCESS;
}
int sum(){
	int a,b,res;
	printf("Enter 2 number");
	scanf("%d%d",&a,&b);
	res=a+b;
	return res;
}
