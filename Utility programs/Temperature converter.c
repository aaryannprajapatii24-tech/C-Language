#include<stdio.h>
#include<conio.h>

int main(){
	
	
	float c,fahernheit;
	
//	printf("Enter a ");
//	scanf("%f",&c);
//	
	printf("The temperature in celsius:");
	scanf("%f",&c);
	
	fahernheit=(1.8 * c) + 32;
	
	printf("The temperature in fahrenheit=%f",fahernheit);

	return 0;	
	
}
