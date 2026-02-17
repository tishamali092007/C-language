#include<stdio.h>
int main(){
    int choice;
    float num1, num2, result;
    
    while(1){  
        
        printf("\nPress 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %%\n");
        printf("Press 0 for the exit\n");
        
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        
        // Exit check
        if(choice == 0){
            printf("Exiting program...\n");
            break; 
        }
        
        // Invalid choice check
        if(choice < 1 || choice > 5){
            printf("Invalid choice! Try again.\n");
            continue;  
        }
        
        // Input numbers
        printf("Enter the first number: ");
        scanf("%f", &num1);
        printf("Enter the second number: ");
        scanf("%f", &num2);
        
        // Switch case for operations
        switch(choice){
            case 1:
                result = num1 + num2;
                printf("Addition of %.0f and %.0f is %.0f\n", num1, num2, result);
                break;
                
            case 2:
                result = num1 - num2;
                printf("Subtraction of %.0f and %.0f is %.0f\n", num1, num2, result);
                break;
                
            case 3:
                result = num1 * num2;
                printf("Multiplication of %.0f and %.0f is %.0f\n", num1, num2, result);
                break;
                
            case 4:
                if(num2 == 0){
                    printf("Error! Division by zero.\n");
                } else {
                    result = num1 / num2;
                    printf("Division of %.0f and %.0f is %.0f\n", num1, num2, result);
                }
                break;
                
            case 5:
                if((int)num2 == 0){
                    printf("Error! Modulus by zero.\n");
                } else {
                    result = (int)num1 % (int)num2;
                    printf("Modulus of %.0f and %.0f is %.0f\n", num1, num2, result);
                }
                break;
        }
    }
    
    return 0;
}