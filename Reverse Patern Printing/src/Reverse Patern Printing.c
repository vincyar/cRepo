/*
 ============================================================================
 Name        : Reverse.c
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
	int i,n,j;
	printf("Enter a limit for pattern printing");
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		for(j=n;j>i;j--){
			printf("* ");
		}printf("\n");
	}
	return EXIT_SUCCESS;
}
