/*
 ============================================================================
 Name        : String.c
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
	char name[100];
	printf("Enter a name");
	scanf("%s",name);
	printf("Entered number is : %s",name);
	return EXIT_SUCCESS;
}
