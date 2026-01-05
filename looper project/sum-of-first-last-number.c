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
//step-1 :  take declare veriable  no,first,last
//step-2: if the no is 125 then 125%10=5
//step-3: until the no is greater than 10 loop will continue 125/10=12 and continue
//step-4: at last single digit no find and first=no
