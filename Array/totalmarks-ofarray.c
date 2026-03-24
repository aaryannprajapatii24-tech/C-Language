#include<stdio.h>
#include<conio.h>
int main(){
	
	int i;
	char studentname[50];
	char subject[7][20] = {"gujrati","English","Maths","Hindi","Science","s.science","computer" };
	int subjectmarks[7],totalmarks=0;
	float percentage;
	
	printf("Enter studentname:");
	scanf("%s",studentname);
	
	for(i=0;i<7; i++){
		printf("\nEnter marks %s:",subject[i]);
		scanf("%d",&subjectmarks[i]);
		
		totalmarks += subjectmarks[i];
	}
	
	percentage = totalmarks / 7;
	
	printf("student infomartion:");
	printf("studentname: %s",studentname);
	printf("totalmarks: %d",totalmarks);
	printf("percentage:%.2f",percentage);
	
	return 0;
}
