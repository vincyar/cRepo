/*
 ============================================================================
 Name        : Array.c
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
	int a[100000],n,i,nextnum;
	printf("Enter your limit for printing numbers of you");
	scanf("%d",&n);
	printf("Enter values");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}printf("Entered values are :");
	for(nextnum=0;nextnum<n;nextnum++){
		printf("%d\t",a[nextnum]);
	}
	return EXIT_SUCCESS;
}
