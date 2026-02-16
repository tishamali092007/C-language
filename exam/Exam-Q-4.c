#include <stdio.h>

int main() {
    int n, *ptr;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    ptr = arr;  
    
    printf("Even elements: ");
    for(int i = 0; i < n; i++) {
        if(*(ptr + i) % 2 == 0) {
            printf("%d ", *(ptr + i));
        }
    }
    printf("\n");
    
    return 0;
}