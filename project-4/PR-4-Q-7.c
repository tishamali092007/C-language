#include <stdio.h>

int main() {
    int i, j;
    int n = 5;

    for(i = 1; i <= n; i++) {

        for(j = 1; j <= n; j++) {

            if(i == 1)                 
                printf("* ");
            else if(i == 3)           
                printf("* ");
            else if(j == 1)           
                printf("* ");
            else if(i == 2 && j == n) 
                printf("* ");
            else
                printf("  ");
        }

        printf("\n");
    }

    return 0;
}
