#include<stdio.h>
#include<conio.h>

void greetmsg();  // This is function declaration.

void greetmsg(){   //This is function definatio.
	
	char name[50];
	printf("\n Enter your name....");
	scanf("%s",name);
	
	printf("Hello,%s",name);
	
} 

int main(){
	
	greetmsg();
	return 0;
}
