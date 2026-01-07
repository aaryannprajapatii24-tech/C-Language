#include<stdio.h>
#include<conio.h>

int main(){
	
	int i,j,temp=1;	
	
	for(i=1; i<=5; i++){
		for(j=1; j<=i; j++){
		if(temp > 10)
			return 0;
		
			printf("%d",temp);
			temp++;
		}
		printf("\n");
	}
	
	return 0;
}

// output:
//1
//23
//456
//78910




