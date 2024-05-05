/*
 ============================================================================
 Name        : MultiDimensional.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void sum;
int main(void) {
	setbuf(stdout,NULL);
	int a[100][100],n,i,j;
	printf("Enter a limit to print");
	scanf("%d",&n);
	printf("Enter values");
	for(i=0;i<n;++i){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}

	}for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
