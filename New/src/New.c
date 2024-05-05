/*
 ============================================================================
 Name        : New.c
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
	char a[20],b[20],temp[20];
	int i,n,j;
	printf("Enter a name to check it palindrome or else");
	scanf("%s",a);
	printf("Enter the name again");
	scanf("%s",b);
	printf("Enter the limit of entered number");
	scanf("%d",&n);
	for(i=0 ,j=n;i<n ,j<n;i++ ,j--){
		temp[i]=b[j];
		b[j]=b[i];
		b[i]=temp[i];
		}
	printf("%s %s",a,b);
	return EXIT_SUCCESS;
}
