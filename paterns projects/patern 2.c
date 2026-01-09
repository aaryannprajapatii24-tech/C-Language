#include<stdio.h>
#include<conio.h>
int main(){
	
	int i,j,temp=11;
	
	for(i=1; i<=4; i++){			// i=1  1<=4  j=1  1<=1  print:11  count=12
		for(j=1; j<=i; j++){		// i=2  2<=4  j=1  1<=2  print:12  j=2  2<=2  print:13  count=14
			printf(" %d",temp);		// i=3  3<=4  j=1  1<=3  print:14  j=2  2<=3  print:15  j=3  3<=3  print:16  count=17
			temp++;					//  i=4  4<=4  j=1  1<=4  print:17  j=2  2<=4  print:18  j=3  3<=4  print:19  j=4  4<=4  print:20  count=21
		}							
		printf("\n");				//i=5  5<=4  FALSE  program ends
	}
	
	return 0;
}

//output:

// 11
// 12 13
// 14 15 16
// 17 18 19 20

				

 
