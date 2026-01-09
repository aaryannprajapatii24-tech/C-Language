#include<stdio.h>
#include<conio.h>
int main(){
	
	int i,j,k;
	
	for(i=5; i>=1; i--){	//i=5  5>=1  space=1  1<5  print:4 spaces  j=5  5<=5  print:5
							// i=4  4>=1  space=1  1<4  print:3 spaces  j=4  4<=5  print:4 5
		for(k=1; k<=i-1; k++){
			printf(" ");	// i=3  3>=1  space=1  1<3  print:2 spaces  j=3  3<=5  print:3 4 5
		}
		for(j=i; j<=5; j++){	// i=2  2>=1  space=1  1<2  print:1 space   j=2  2<=5  print:2 3 4 5
			printf("%d",j);		// i=1  1>=1  space loop false  j=1  1<=5  print:1 2 3 4 5
		}						
		printf("\n");
	}
	
	return 0;
}

//output:

//    5
//   45
//  345
// 2345
//12345
  		 




      
      
