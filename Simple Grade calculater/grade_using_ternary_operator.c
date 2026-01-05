#include<stdio.h>
#include<conio.h>

int main(){
	
	int score;
	char grade;
	
	printf("Enter your score out of 100= ");
	scanf("%d",&score);
	
	
	grade=(score<=100 && score>=90 )? 'A' : 
	    	(score<90 && score>=80)? 'B':
	    	(score<80 && score>=70)? 'C':	
	    	(score<70 && score>=35)? 'D':
	    	(score<35 && score>=0)? 'F':printf("invalid score!");
	    			

	
	    switch(grade){
	    	
	    	case 'A':
	    		printf("Your grade is.%c\tExcelent Work!",grade);
	    		break;
	    	
	    	case 'B':
	    		printf(" Your grade is.%c\t Well done!",grade);
	    		break;
	    		
	    	case 'C':
				printf("Your grade is.%c\tGood Job!",grade);
				break;
				
			case 'D':
				printf("Your grade is.%c\tYou passed,but you could do better!",grade);
				break;
				
			case 'F':
				printf("Your grade is.%c\tSorry,you failed!",grade);
				break;	
				
				default: 
				printf("");	
		}		
	    	
	if(score<=100 && score>=35){
		
		printf(" Congratulation!, You are eligible");
	}
	else{
		
		printf(" pls try again next time");
	}
	
	
	return 0;
}
