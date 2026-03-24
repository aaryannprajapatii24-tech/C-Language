#include <stdio.h>

int main() {
    char str[100];
    char *ptr;
    int length = 0;

    printf("Enter any string: ");
    fgets(str, sizeof(str), stdin);

    ptr = str;  // Pointer points to the start of string

    // Loop until null character '\0'
    while (*ptr != '\0') {
        if (*ptr != '\n') {  // Ignore newline from fgets
            length++;
        }
        ptr++;  // Move pointer to next character
    }

    printf("The length of a string is: %d\n", length);

    return 0;
}
