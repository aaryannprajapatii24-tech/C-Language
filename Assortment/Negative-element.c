#include<stdio.h>
#include<conio.h>

int main (){
	
	int a[100],n,i;
	
	printf("Enter the array's size: ");
	scanf("%d",&n);
	
	printf("Enter array's element: \n");
	for(i=0; i<n; i++){
		printf("a %d= ",i);
		scanf("%d",&a[i]);
	}
	
	printf("Negative element from an array: ");
	for(i=0; i < n; i++){
		if(a[i] < 0){
			printf("%d",a[i]);
		}
	}
	
	
	return 0;
}
