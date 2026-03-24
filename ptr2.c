#include<stdio.h>
int main(){
	
	int a[5];
	int *ptr,i;
	
	ptr = a;
	
	for(i=0;i<5;i++){
		printf("Enetr a Element:[%d]",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++){
		printf("\n%d - %u",(*ptr) * (*ptr),ptr);
		ptr++;
	}
	
	return 0;
}
