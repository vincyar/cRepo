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
	int a[10000],limit,i,searchkey,flag=0;
	printf("Enter a limit");
	scanf("%d",&limit);
	printf("Enter values");
	for(i=0;i<limit;i++){
		scanf("%d",&a[i]);
	}
	printf("Values =");
	for(i=0;i<limit;i++){
		printf(" %d\t",a[i]);
	}printf("\nEnter a search key");
	scanf("%d",&searchkey);
	for(i=0;i<limit;i++){
		if(searchkey==a[i]){
			printf("%d founded on %d  row\t",searchkey,i+1);
			flag=1;

		}
	}if(flag==0){
		printf("%d not found",searchkey);
	}
	return EXIT_SUCCESS;
}
