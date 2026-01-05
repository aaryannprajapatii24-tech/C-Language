#include<stdio.h>
#include<conio.h>
int main(){
	
	int no,count,rem;
	
	printf("Enter a number: ");
	scanf("%d",&no);
	
	
	while(no != 0){

	rem = no% 10;
	
	no= no/10;
	count++;
			
		
		
	}
	printf("Count of number digites:%d",count);
	return 0;
}
