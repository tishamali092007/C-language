#include <stdio.h>

int main() {
    int i, j, k;
    int num;
    
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= 5 - i; j++) {
            printf("  ");
        }
        
        num = 11 - i;
        for(k = 1; k <= i; k++) {
            printf("%d ", num);
            num++;  
        }
        
        printf("\n");
    }
    
    return 0;
}
