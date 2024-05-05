/*
 ============================================================================
 Name        : Even.c
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
    int i,n;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    	if(i%2==0){
    		printf("%d\n",i);
    	}
    }
	return EXIT_SUCCESS;
}
