/*
 ============================================================================
 Name        : Prime.c
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
    int i,n,flag;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=2;i<n;i++){
    	if(n%i==0){
    		flag=1;
    		break;
    	}
    }if(flag==1){
    	printf("%d is not a prime number",n);
    }else{
    	printf("%d is a prime number",n);
    }
	return EXIT_SUCCESS;
}
