/*
 ============================================================================
 Name        : Pattern.c
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
    printf("Enter your limit for printing pattern");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    	for(j=0;j<i;j++){
    		printf("* ");
    	}printf("\n");
    }
	return EXIT_SUCCESS;
}
