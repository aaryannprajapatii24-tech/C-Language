#include<stdio.h>
#include<conio.h>

int main(){
	
	int a1[5], a2[5], a3[5];
	int i;
	
	printf("Enter 5 values for first array:\n");
	for(i=0; i<5; i++){
		scanf("%d", &a1[i]);
	}
	
	printf("Enter 5 values for second array:\n");
	for(i=0; i<5; i++){
		scanf("%d", &a2[i]);
	}
	
	// Sum of arrays
	for(i=0; i<5; i++){
		a3[i] = a1[i] + a2[i];
	}
	
	printf("Sum of array elements:\n");
	for(i=0; i<5; i++){
		printf("%d ", a3[i]);
	}
	
	return 0;
}

