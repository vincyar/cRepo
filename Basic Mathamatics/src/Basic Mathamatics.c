/*
 ============================================================================
 Name        : Basic.c
 Author      : sree shabareesh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	int a;
    int q,c,result;
	printf("1 for sum \n2 for addition \n3 for multiplication \n4 for subtraction");
	scanf("%d",&a);
	printf("Enter 2 numbers for your wish");
	scanf("%d%d",&q,&c);
	if(a=="sum"){
		result=q+c;
		printf("Result is : %d",&result);
	}
	return EXIT_SUCCESS;
}
