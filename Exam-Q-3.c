#include <stdio.h>

void printOddElements(int arr[], int n) {
    printf("Odd elements: ");
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 != 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main() {
    int n;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printOddElements(arr, n);
    
    return 0;
}