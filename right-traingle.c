#include<stdio.h>

    int main(){

        int i,j,n;
        printf("enter number:");
        scanf("%d",&n);

            for(i=1; i<=n; i++){
                for(j=1; j<=i; j++){
                    printf("%d ",j);
                }
                printf("\n");
            }
            return 0;
    }

#include <stdio.h>

int main() {
    int i, j;

    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= 5; j++) {
            if(
                (i == 1 && (j == 2 || j == 4)) ||
                (i == 2 && (j == 1 || j == 3 || j == 5)) ||
                (i == 3 && (j == 1 || j == 3 || j == 5)) ||
                (i == 4 && (j == 1 || j == 3 || j == 5)) ||
                (i == 5 && (j == 2 || j == 4))
              )
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;

} 


#include <stdio.h>

int main() {
    int i, j, n = 7;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {

            if (i == 1 && j == 4 ||
                i == 2 && (j == 3 || j == 5) ||
                i == 3 && (j == 2 || j == 6) ||
                i == 4 && (j == 1 || j == 7) ||
                i == 5 && (j == 2 || j == 6) ||
                i == 6 && (j == 3 || j == 5) ||
                i == 7 && j == 4)

                printf("⭐");
            else
                printf("  ");   // double space for alignment
        }
        printf("\n");
    }
    return 0;
}