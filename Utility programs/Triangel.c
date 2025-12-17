#include<stdio.h>
#include<conio.h>

int main(){
	
	int f_angel,s_angel,t_angel;
	
	printf("Enter a first angel : ");
	scanf("%d",&f_angel);
	
	printf("Enter a second angel : ");
	scanf("%d",&s_angel);

	t_angel=180 - (f_angel + s_angel);
	
	printf("Now your Third angel is %d",t_angel);
	
	return 0;
			
	
	
}
