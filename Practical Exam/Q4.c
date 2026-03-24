#include <stdio.h>

int main() {
    int a[100], n, i;
    int *ptr;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    p = a; // pointer assign

    for(i = 0; i < n; i++) {
        printf("%d ", (*ptr) * (*ptr));
        p++; //Scale pointer.
    }

    return 0;
}
