#include<stdio.h>
#include<conio.h>

int main(){
	
	int i,user,e_sum=0,o_sum=0;
	
	printf("Enter a number ");
	scanf("%d",&user);
	
	printf("\nEven number:\n");// for even number
	for(i=1; i<=user; i++)
	{
	if(i%2==0){
		
		printf("%d\n",i);
		e_sum= e_sum  +  i ;
		
	}	
}
    printf("\nsum of even numbers = %d",e_sum);
	
	
	printf("\n\nOdd number: "); // for odd number
	for(i=1; i<=user; i++)
	{
	if(i%2!=0){
		
		printf("%d\n",i);
		o_sum = o_sum + i;
		
	}	
}
	printf("\nSum of odd numbers = %d",o_sum);
	
	return 0;
}
