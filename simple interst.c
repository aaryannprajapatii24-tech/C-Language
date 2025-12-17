#include<stdio.h>
#include<conio.h>

int main(){
	
	
	int p,r,n,area;
	printf("enter a principal amount");
	scanf("%d",&p);
	
	printf("enter a rate amount");
	scanf("%d",&r);
	
    printf("enter a time of month amount");
	scanf("%d",&n);
	
	
	area=p*r*n/100;
	
	
	printf("enter a simple intrest=%d",area);
	
	return 0;
			
}
