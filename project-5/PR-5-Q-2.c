#include<stdio.h>
int main(){
    int r, c, i, j, a[10][10], large;
    
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
    
    large = a[0][0];  
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            if(a[i][j] > large){
                large = a[i][j];
            }
        }
    }
    
    printf("The largest element is: %d\n", large);
    
    return 0;
}