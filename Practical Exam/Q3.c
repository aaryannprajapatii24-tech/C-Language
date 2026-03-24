#include <stdio.h>

void reverse(char str[]) {
    int i = 0, j = 0;
    char temp;

    // length find
    while(str[j] != '\0') {
        j++;
    }
    j--; // last index

    // reverse
    while(i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }
}

int main() {
    char str[100];

    printf("Enter string: ");
    scanf("%s", str);

    reverse(str);

    printf("Reversed string = %s", str);

    return 0;
}
