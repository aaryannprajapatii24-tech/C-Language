#include<stdio.h>
#include<conio.h>

int main(){
	
	int age;
	
	printf("Enter your age:");
	scanf("%d",&age);
	
	(age >= 18) ? printf("you can vote") : printf("you cannot vote");
	
	
	
	
	return 0;
}
