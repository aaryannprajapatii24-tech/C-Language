#include<stdio.h>

int main(){
	
	int a=7;
	int *ptr1;
	int **ptr2;
	
	ptr1 = &a;
	ptr2 = &ptr1;
	
	printf("\nAdress of a:%u",&a);
	printf("\nAdress of ptr1:%u",&ptr1);
	printf("\nAdress of ptr2:%u",&ptr2);
	printf("\n ptr2:%u",ptr2);
	printf("\n ptr1:%u",*ptr1);
	
	
	
}
