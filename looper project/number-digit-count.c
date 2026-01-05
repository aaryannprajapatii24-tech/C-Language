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

// step 1 : declare three variable in no , count , rem.
// step 2 : Enter a number take number in user.
// step 3 : while (no !=0 ) condition loop no not qeual 0 will loop is continue.
// step 4 : rem = no % 10 = example: 123 % 10  = 3 .
// step 5 : no = no/10 = 123 / 10 ; = 12
// step 6 : count++ total no of count in digites. 

