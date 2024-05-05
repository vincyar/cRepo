/*
 ============================================================================
 Name        : SelectionSorting.c
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
	int a[100],n,i,j,temp;
	printf("Enter a limit");
	scanf("%d",&n);
	printf("Enter Values");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}printf("Sorted Values:");

	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
















	return EXIT_SUCCESS;
}
