/*
 ============================================================================
 Name        : Switch.c
 Author      : sree shabareesh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    setbuf(stdout,NULL);
    int a;
    printf("1 for mandhi \n2 for porotta \n3 for fried rice \n4 for masala dhosha \nEnter your choice");
    scanf("%d",&a);
    switch(a){
    case 1:
    	printf("You have ordered mandhi");
    	break;
    case 2:
    	printf("You have ordered porotta");
    	break;
    case 3:
    	printf("You have ordered fried rice");
    	break;
    case 4:
    	printf("You have ordered masala dhsha");
    break;
    default:
    	printf("Fool!!!!!!");
    }
	return EXIT_SUCCESS;
}
