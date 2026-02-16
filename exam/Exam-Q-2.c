#include <stdio.h>

float findAverage(int rows, int cols, int arr[rows][cols]) {
    int sum = 0, count = 0;
    
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            sum += arr[i][j];
            count++;
        }
    }
    
    return (float)sum / count;
}

int main() {
    int rows, cols;
    
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);
    
    int arr[rows][cols];
    
    printf("Enter elements of 2D array:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    
    float average = findAverage(rows, cols, arr);
    printf("\nAverage of all elements: %.2f\n", average);
    
    return 0;
}