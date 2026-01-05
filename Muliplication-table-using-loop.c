#include<stdio.h>
#include<conio.h>


int main(){
	
		int i,user,mul;
		
		printf("Enter a number :");
		scanf("%d",&user);
		
		for(i=1; i<=10; i++){

			mul = user * i;
			printf("%d * %d = %d\n",user,i,mul);
			
		}
		
	
	
	return 0;
}
