/*
 ============================================================================
 Name        : ssk.c
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
    int a[100000],n,i,sum=0;
    printf("Enter your limit to sum all the numbers you have entered");
    scanf("%d",&n);
    printf("Enter values");
    for(i=0;i<n;i++){
    	scanf("%d",&a[i]);
    }for(i=0;i<n;i++){
    	sum=sum+a[i];
    }printf("Result=%d",sum);
    printf("\n\nDo you have another helps from me");
	return EXIT_SUCCESS;
}
