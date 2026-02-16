#include <stdio.h>

int main() {
    float marks[5], total = 0, average;
    int i;
    char grade;
    
    printf("Enter marks for 5 subjects (out of 100):\n");
    for(i = 0; i < 5; i++) {
        printf("Subject %d: ", i+1);
        scanf("%f", &marks[i]);
        total += marks[i];
    }
    
    average = total / 5;
    
    // Assign grade based on average
    if(average >= 90)
        grade = 'A';
    else if(average >= 80)
        grade = 'B';
    else if(average >= 70)
        grade = 'C';
    else if(average >= 60)
        grade = 'D';
    else if(average >= 50)
        grade = 'E';
    else
        grade = 'F';
    
    printf("\nTotal Marks: %.2f\n", total);
    printf("Average: %.2f\n", average);
    printf("Grade: %c\n", grade);
    
    return 0;
}