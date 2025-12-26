#include<stdio.h>
#include<conio.h>

int main (){
	
	int score;
	char grade;
	
	
	printf("Enter your score of out of 100:=");
	scanf("%d",&score);
	
	
	if(score >=90){
		
		grade = 'A';		
	}
	else if(score >=80){
		grade = 'B';		
	}
	else if(score >= 70){
		grade = 'c';
	}
	else if(score >=60){
		grade = 'd';
	}
	else if(score >=35){
		grade = 'e';
		
	}
	else {
		printf("\nSorry ap pass nahi huye ho:");
	}
	
	
	if(score >=35){
		printf("grade = %c",grade);
	}
	
	
	
	return 0;
	
}
