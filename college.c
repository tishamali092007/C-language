// #include<stdio.h>

// int main(){

//     int a[3][3],i,j,sum;
//     printf("enter 9 elements\n");

//     for(i=0;i<3;i++){
//         sum=0;
//         for(j=0;j<3;j++){
//             scanf("%d",&a[i][j]);
//             sum = sum + a[i][j];
//            }
//         a[i][2]=sum;   
//     }
//     printf("new matrix:\n");

//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             printf("%d ",a[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

#include<stdio.h>
int main(){

    int a[3][3],i,j,sum;
    printf("enter 9 elements:\n");

    for(i=0;i<3;i++){
        sum=0;
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
            sum= sum+a[i][j];
        }
        a[i][2]=sum;

    }
     printf("new matrix:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}