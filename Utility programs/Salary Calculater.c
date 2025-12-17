#include<stdio.h>
#include<conio.h>

int main(){
	
	float b_salary,hra,da,ta,salary;
	
	printf("Enter a base salary");
	scanf("%f",&b_salary);
	
	hra=(b_salary * 10) /100;
	printf("Enter a hra vlaue:%f\n",hra);
	
	da=(b_salary * 5) /100;
	printf("Enter a da value:%f\n",da);
	
	ta=(b_salary * 8) / 100;
	printf("Enter a ta value:%f\n",ta);
	
	salary=b_salary+hra+da+ta;
	
	printf("Now your gross salary is %f",salary);
	
	return 0;
	
	
	
	
	
}
