#include<stdio.h>
#include<conio.h>

int main(){
	
	char ch ='a';  //start a declar a verable end start with ch='a';
	
	do{
		
		printf("%c\t",ch); //print hogi bad me chek hogi ;
		
		ch = ch + 4;    //ch=a a+4 = e ch=e;  //next ch=e e+4 = i ch=i; 
	}while(ch <='z');   // ch=e e<=z condition is true .
						// ch=i i<=z condition is true .
	
	return 0;
}

//step 3: ch=i i+4 ch=m;
//ch=m m<=z condition is true . 

//step 4 : ch=m m+4 ch=q;
// ch=q q<=z condition is true.

//step 5: ch=q Q+4 ch=u;
// ch=u u<=z condition is true . 

//step 6 : ch=u u+4 ch=y;
// ch=y y<=z condition is true . 

//step 7: ch=y y+4 can't loop in continue it is y after z and afetr loop is stop.
