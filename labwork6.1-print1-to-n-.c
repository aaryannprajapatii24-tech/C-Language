#include<stdio.h>
#include<conio.h>
int main(){
	
	int i,num;
	
	printf("Enter any number: "); // hamne dala 5 number
	scanf("%d",&num);

	for(i=1; i<=num; i++ ){ //i=1 1<=5 = codition true = 1 ,next i=2;
							//i=2 2<=5 = true = 2 , next i=3;
							//i=3 3<=5 = true = 3,  next i=4;
							//i=4 4<=5 = true = 4,  next i=5;
							//i=5 5<=5 = true = 5,  next i=6;
							//i=6 6<=5 = false condition , that loop is stop ;
		printf("%d",i);
		
		
	}	
	
	
	return 0;
}
