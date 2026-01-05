<<<<<<< HEAD
#include <stdio.h>
#include<conio.h>
int main() {
    int a, b;

    // Input
    printf("Enter value of a: ");
    scanf("%d", &a);

    printf("Enter value of b: ");
    scanf("%d", &b);

    // Swapping without third variable
    a = a + b;
    b = a - b;
    a = a - b;

    // Output
    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d", b);

    return 0;
}

=======
#include <stdio.h>
#include<conio.h>
int main() {
    int a, b;

    // Input
    printf("Enter value of a: ");
    scanf("%d", &a);

    printf("Enter value of b: ");
    scanf("%d", &b);

    // Swapping without third variable
    a = a + b;
    b = a - b;
    a = a - b;

    // Output
    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d", b);

    return 0;
}

>>>>>>> 89183497dc508a4db6299ba29d2ac74a7f5e9e93
