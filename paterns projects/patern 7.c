#include<stdio.h>
#include<conio.h>
int main(){
	
	int i,j;
	
	for(i=1; i<=7; i++){
		for(j=1; j<=5; j++){
			if(i == 1 || i == 4){
				printf("*");
			}
			else if(j == 1){
				printf("*");
			}
			else if((i == 2 || i == 3) && j == 5){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}	
	return 0;
}


//output: 

//*****
//*   *
//*   *
//*****
//*
//*
//*

// i=1  i==1 true  j=1..5  print:* * * * *  ? *****
// i=2  i==1||4 false  j=1 print:*  j=2..4 print:space  (i==2 && j==5) true print:*  ? *   *
// i=3  i==1||4 false  j=1 print:*  j=2..4 print:space  (i==3 && j==5) true print:*  ? *   *
// i=4  i==4 true  j=1..5  print:* * * * *  ? *****
// i=5  i==1||4 false  j=1 print:*  j=2..5 print:space  ? *
// i=6  i==1||4 false  j=1 print:*  j=2..5 print:space  ? *
// i=7  i==1||4 false  j=1 print:*  j=2..5 print:space  ? *



