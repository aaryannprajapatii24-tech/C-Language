#include<stdio.h>


int main(){
	
	
	int a=10,b=5;

	int *ptr;
	ptr = &a;

	printf("\nValue of A:%d",a);
	printf("\nAdress of A: %u",&a);
	
	printf("\nValue of ptr:%u",ptr);
	
	printf("/n *ptr = %d",*ptr);
	
	printf("\n Adress of ptr %u",*ptr);
	
	return 0;
}
