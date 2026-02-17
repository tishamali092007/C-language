#include<stdio.h>
int main(){
    int r, c, i, j, a[10][10], row, col, sum=0;
    
    printf("Enter the array's row size: ");
    scanf("%d", &r);
    printf("Enter the array's column size: ");
    scanf("%d", &c);
    
    printf("Enter array's elements:\n");
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    
    // Row sum
    printf("Enter row number: ");
    scanf("%d", &row);
    sum = 0;
    printf("Elements of row %d: ", row);
    for(j=0; j<c; j++){
        printf("%d ", a[row][j]);
        sum += a[row][j];
    }
    printf("\nThe sum of a row %d: %d\n\n", row, sum);
    
    // Column sum
    printf("Enter column number: ");
    scanf("%d", &col);
    sum = 0;
    printf("Elements of column %d: ", col);
    for(i=0; i<r; i++){
        printf("%d ", a[i][col]);
        sum += a[i][col];
    }
    printf("\nThe sum of column %d: %d\n", col, sum);
    
    return 0;
}