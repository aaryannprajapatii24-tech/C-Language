#include<stdio.h>
#include<conio.h>

int main(){
	
		int x,y,sub,result;
	
	printf("Enter the x value:");
	scanf("%d",&x);
	
	
	printf("Enter the y value:");
	scanf("%d",&y);
	
	sub = x-y;
	
	printf("Sub is %d",sub);
	
	result = sub*sub;
	
	printf("\n Final answer of (x-y)^2  :%d",result);
	
	
	return 0;
	
}
