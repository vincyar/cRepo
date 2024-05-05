/*
 ============================================================================
 Name        : asseingment.c
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
	int a[2][2],i,j;
	printf("Enter a values");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%d",&a[i][j]);
		}
	}printf("Values:\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
