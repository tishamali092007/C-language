#include <stdio.h>

void findCubes(int *ptr, int size) {
    printf("Cubes of all elements:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", (*(ptr + i * size + j)) * (*(ptr + i * size + j)) * (*(ptr + i * size + j)));
        }
        printf("\n");
    }
}

int main() {
    int size;

    printf("Enter array's size: ");
    scanf("%d", &size);

    int a[size][size];

    printf("Enter array elements:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    findCubes(*a, size);

    return 0;
}

