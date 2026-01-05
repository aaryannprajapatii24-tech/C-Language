#include<stdio.h>
#include<conio.h>
int main(){
	
	float m,s,e,mark;
	
	printf("Enter a Maths mark=");
	scanf("%f",&m);
	
	printf("Enter a Science mark=");
	scanf("%f",&s);
	
	printf("Enter a English mark=");
	scanf("%f",&e);
	
	mark = (m+ s+ e)/3;
	
	printf("Average of mark=%.2f",mark);
	
	
	return 0;
}
