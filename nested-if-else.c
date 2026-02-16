#include<stdio.h>
#include<conio.h>
int main(){
    int a,b,c;
    printf("enter a value of the first number :");
    scanf("%d",&a);
    printf("enter a value of the second number :");
    scanf("%d",&b);
    printf("enter a value of the third number :");
    scanf("%d",&c);
    if(a<b){
        printf("minimum value is : %d",a);
    }
    else{
        printf("minimum value is : %d",b);
    }
    return 0;
}
