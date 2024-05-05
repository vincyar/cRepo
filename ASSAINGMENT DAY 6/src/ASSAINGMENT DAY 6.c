/*
 ============================================================================
 Name        : ASSAINGMENT.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int getarray();
void displayarray(int);


int main(void) {
	int a[100];
	setbuf(stdout,NULL);
	a[100]=getarray();
	displayarray(a[100]);

	return EXIT_SUCCESS;
}
int getarray(){
	int i,n,a[100];
	printf("Enter array limit");
	scanf("%d",&n);
	printf("Enter values");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}

	return a[100];

}
void displayarray(int a){
	int i,n;
    printf("Enter the limit again");

    scanf("%d",&n);



    for(i=0;i<n;i++){
		printf("%d",a);
	}
}
