#include<stdio.h>
#include<conio.h>

int main(){
	
	float r, area;
    float pi = 3.14;

    printf("Enter the radius of the circle: ");
    scanf("%f", &r);

    area = pi * r * r;

    printf("Area of the circle = %f", area);

    return 0;
	
}
