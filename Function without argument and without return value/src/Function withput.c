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

void sum();
int main(void) {
	setbuf(stdout,NULL);
		sum();

	return EXIT_SUCCESS;
}
void sum(){
	int num1,num2,sum;
	printf("\nEnter 2 number");
	scanf("%d%d",&num1,&num2);
	sum=num1+num2;
	printf("Result is : %d",sum);
}
