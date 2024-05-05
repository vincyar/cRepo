/*
 ============================================================================
 Name        : Negative.c
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
    float a;
    printf("Enter a numbers");
    scanf("%f",&a);
    if(a>0){
    	printf("Number is positive");

    }else if(a<0){
    	printf("Number is negative");
    }else{
    	printf("FOOL!!!!!!!!");
    }
	return EXIT_SUCCESS;
}
