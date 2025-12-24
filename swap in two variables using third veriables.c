#include<stdio.h>
#include<conio.h>

int main(){
		int x,y,temp;
	
	printf("Enter the x value:");
	scanf("%d",&x);
	
	
	printf("Enter the y value:");
	scanf("%d",&y);
	
	temp=x;
	x=y;
	y=temp;
	
	printf("After Swaping:\n");
	printf("x = %d\n",x);
	printf("y = %d\n",y);
	
	
	
	return 0;
}
