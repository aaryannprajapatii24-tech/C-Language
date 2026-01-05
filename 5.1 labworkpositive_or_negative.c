#include<stdio.h>
#include<conio.h>

int main(){
	
	int num;
	
	printf("Enter any number=");
	scanf("%d",&num);
	
	if(num>0){
		printf("This value is positive=");
	}
	else if(num<0){
		printf("This value is negative=");		
	}
	else{
		printf("This value is neutral=");
	}
	
	return 0;
}
