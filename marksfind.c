#include<stdio.h>
#include<conio.h>
int main(){
    int maths,english,science;
    float avg;
    printf("enter maths marks:");
    scanf("%d",&maths);
    printf("enter english marks:");
    scanf("%d",&english);
    printf("enter science marks:");
    scanf("%d",&science);
    
    avg = (maths+english+science)/3.0;
    printf("average mark: %.2f",avg);
    return 0;
}


