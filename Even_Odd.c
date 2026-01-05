#include<stdio.h>
#include<conio.h>
int main(){
	
	int num;
	printf("Enter the Number:");
	scanf("%d",&num);
	
	if(num%2 ==0){
		printf("Your number is Even:");
	}
	else{
		printf("Your number is Odd:");
	}
	
	return 0;
}
