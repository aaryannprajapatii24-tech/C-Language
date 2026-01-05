#include<stdio.h>
#include<conio.h>

int main(){
 
  		int i;  //start the declaer veriable in while loop;

		printf("Enter any number: ");
		scanf("%d",&i);
		
		while(i>=1){
			if(i %2 == 0 ){
				printf("%d\n",i);
			}
			
			
		i--;	
		}	
	
	return 0;
}
