#include<stdio.h>
#include<conio.h>
int main(){

    int i,j;
    char ch;

    for (i = 0; i < 5; i++) {          // rows
        ch = 'A' + i;                  // starting letter
        for (j = 0; j <= i; j++) {     // columns
            printf("%c ", ch);
            ch--;                      // letter reverse side
        }
        printf("\n");
    }
	
	return 0;
}

//output:

//A
//B A
//C B A
//D C B A
//E D C B A
