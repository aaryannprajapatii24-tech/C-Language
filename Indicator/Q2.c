#include <stdio.h>

// UDF to calculate cube using pointer
void cubeElements(int *ptr, int size) {
    int i;
    for (i = 0; i < size; i++) {
        *(ptr + i) = (*(ptr + i)) * (*(ptr + i)) * (*(ptr + i));
    }
}

int main() {
    int a[10][10], n, i, j;

    printf("Enter array's size: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Passing 2D array as pointer
    cubeElements(&a[0][0], n * n);

    printf("\nCubes of all elements:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}


