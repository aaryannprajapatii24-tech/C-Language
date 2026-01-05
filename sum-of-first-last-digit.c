#include<stdio.h>
#include<conio.h>
int main(){
	
	int no,last,first;
	
	printf("Enter a number:");
	scanf("%d",&no);
	
	last = no% 10;
	while(no >=10){
	
	no = no/10;		
	}
	first = no;
	printf("Sum of first and last digites:%d",first+last);
	return 0;
}
