/*
 ============================================================================
 Name        : Sample.c
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
	int b,c,q;
	printf("Enter a number");
	scanf("%d",&b);
	q=sum();
	c=q+b;
	printf("Sum : %d",c);


	return 0;
}
int sum(){
	int a;
	printf("Enter the number again");
	scanf("%d",&a);
	return a;
}
