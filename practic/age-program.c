#include<stdio.h>
#include<conio.h>
int main(){
	
	//conditional statements
//	1)simple if only if
//	2)if-else 
//	3)ladder else if

	//driving licence
//	1)age>18
//	2)
	int age;
	printf("enter your age");
	scanf("%d",&age);
	
	printf("\n your age is %d\n",age);
	
//	if(condition){
		//work which you want to run
//	}
		
//		if(age>18){//true
//			printf("\n driving licence");
//		}
//		else if(age>16){
//			printf("\n learning licence");
//		}
//		else if(age>12){
//			printf("elicetric");
//		}
//		else{//false
//			printf("\n wait for few years, because age should be grater than 18");
//		}

		if(age>=16 && age<=18){
			printf("learning licence");
		}
		else if(age>18  && age<=60) {
			printf("driving licence");
		}
		else{
			printf("not allowed");
		}
	return 0;
}
