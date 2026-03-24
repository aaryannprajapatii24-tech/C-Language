#include<stdio.h>

int squar();

int squar(){
	
	int n;
	printf("Enter any Numbers:");
	scanf("%d",&n);
	
	printf("Your Square is :%d",n*n);
	
	
}
int main(){
	
	squar();
	
	return 0;
}
