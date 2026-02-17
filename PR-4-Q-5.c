#include<stdio.h>

int main(){
    int i, j, k;

    for(i = 5; i >= 1; i--){

        for(j = 1; j < i; j++){
            printf("  ");
        }
        for(j = i; j <= 5; j++){
            printf("%d ", j);
        }
        for(k = 5; k >= i; k--){
            if(k != 5)  
                printf("%d ", k);
        }

        printf("\n");
    }

    return 0;
}
