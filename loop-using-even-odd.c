#include<stdio.h>
#include<conio.h>

int main(){
	
	int i,user;
	
	printf("Enter a number ");
	scanf("%d",&user);
	
	printf("\nEven number: ");
	for(i=1; i<=user; i++)
	{
	if(i%2==0){
		
		printf("%d\n",i);
	}	
}
	
	printf("\nOdd number: ");
	for(i=1; i<=user; i++)
	{
	if(i%2!=0){
		
		printf("%d\n",i);
	}	
}
	
	
	return 0;
}
