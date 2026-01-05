#include<stdio.h>
#include<conio.h>

int main(){
	
	int num1,num2,num3,num4;
	
	printf("Enter the value of first number:");
	scanf("%d",&num1);
	
	
	printf("Enter the value of second number:");
	scanf("%d",&num2);	
	
	printf("Enter the value of third number:");
	scanf("%d",&num3);	
	
	printf("Enter the value of forth number:");
	scanf("%d",&num4);	
	
	
	if(num1 > num2  && num1 > num3 && num1 > num4){
		printf("The minimum value is:%d",num1);
	}
	else if(num2 > num1 && num2 > num3 && num2 > num4){
		printf("The minimum value is:%d",num2);
	}
	else if(num3 > num1 && num3 > num2 && num3 > num4){
		printf("The minimum value is:%d",num3);
	}
	else{
		printf("The minimum value is:%d",num4);
	}
	
	return 0;
	
}
