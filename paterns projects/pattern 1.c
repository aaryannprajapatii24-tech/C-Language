#include<stdio.h>
#include<conio.h>
int main(){
	
	int i,j;		//step 1:
					//i=41 : 41<=45 : condition true : 
					//j=41 : 41<=41 : condition true : print(j) : 41 print			
					//j++ : j=42 : 42<=41 false new line 
					
	for(i=41; i<=45; i++){		//step 2:
		for(j=41; j<=i; j++){	// i++ = : i=42 42<=45 : 
			printf(" %d",j);	// j=41 : 41<=42 condition true : print(J): 41 print
		}						//J++ : j=42 : 42<=42 cindtion true : print(j) : 42 print	
		printf("\n");			//J++ : j=43 : 43<=42 false new line: 
	}
	return 0;
}

//output:

// 41
// 41 42
// 41 42 43
// 41 42 43 44
// 41 42 43 44 45
