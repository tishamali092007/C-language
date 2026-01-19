#include<stdio.h>
#include<conio.h>
int main(){
    int num;
    char grade;
    printf("enter your score:");
    scanf("%d", &num);
    // step 1 ternary operator
    grade=(num >= 90)? 'A':
          (num >= 80)? 'B':
          (num >= 70)? 'C':
          (num >= 60)? 'D':
          (num >= 50)? 'E':'F';
    printf("your grade is %c-",grade);

    // step 2 switch case

    switch(grade){
            case 'A':
            printf("Excellent work!");
            break;
        
            case 'B':
            printf("Well done.");
            break;
            
            case 'C':
            printf("Good job.");
            break;

            case 'D':
            printf("you passed,but you cloud do better");
            break;
            
            case 'E':
            printf("you are passed with grazing marks");
            break;
            
            case 'F':
            printf("sorry you failed ");
            break;
    }

    // step 3 if-else-statement
    
    if(grade == 'F'){
            printf(" Please try again next time.");
        }
        else{
            printf("You are eligible for the next level.");
            }
        return 0;
    
}
