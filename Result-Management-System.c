#include<stdio.h>

int main(){

        char name[50],grade; 
        int rollnumber;
        float subject1,subject2,subject3,totalmarks,percentage;

    printf("\n========================================\n");
    printf("   STUDENT RESULT MANAGEMENT SYSTEM\n");
    printf("========================================\n\n");

        printf("enter student name:");
        scanf("%s",&name);

        printf("enter roll number:\n");
        scanf("%d",&rollnumber);

        printf("enter marks of 3 subject:\n");

        printf("subject1:");
        scanf("%f",&subject1); 
        printf("subject2:\n");
        scanf("%f",&subject2); 
        printf("subject3:\n");
        scanf("%f",&subject3); 

        totalmarks = subject1 + subject2 + subject3;
        printf("totalmarks: %.2f \n",totalmarks);
        percentage = (totalmarks/300.0)*100.0;
        printf("percentage: %.2f",percentage);

    return 0;
}
