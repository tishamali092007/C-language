#include <stdio.h>        // printf() function mate
#include <conio.h>        // Turbo C mate

int main()
{
    int i, j;             // i, j variables declare
                          // Output : Nothing

    int num = 1;          // num = 1
                          // Output : Nothing

    for (i = 1; i <= 5; i++)
    {                     
        // ===== i = 1 =====
        // Row 1 start

        for (j = 1; j <= 5; j++)
        {
            // j = 1
            if (j <= i)   // 1 <= 1 → TRUE
            {
                printf("%d ", num);
                // Output : 1

                num++;    
                // num = 2
            }
            // j = 2 → 2 <= 1 → FALSE → Skip
            // j = 3 → FALSE → Skip
            // j = 4 → FALSE → Skip
            // j = 5 → FALSE → Skip
        }

        printf("\n");
        // New line
        // Screen Output:
        // 1
    }

    for (i = 2; i <= 2; i++)
    {
        // ===== i = 2 =====
        // Row 2 start

        for (j = 1; j <= 5; j++)
        {
            // j = 1
            if (j <= i)   // 1 <= 2 → TRUE
            {
                printf("%d ", num);
                // Output : 2

                num++;    
                // num = 3
            }

            // j = 2
            if (j <= i)   // 2 <= 2 → TRUE
            {
                printf("%d ", num);
                // Output : 3

                num++;    
                // num = 4
            }
            // j = 3,4,5 → FALSE → Skip
        }

        printf("\n");
        // Screen Output:
        // 2 3
    }

    for (i = 3; i <= 3; i++)
    {
        // ===== i = 3 =====
        // Row 3 start

        for (j = 1; j <= 5; j++)
        {
            // j = 1 → TRUE → Output : 4 → num = 5
            // j = 2 → TRUE → Output : 5 → num = 6
            // j = 3 → TRUE → Output : 6 → num = 7
            // j = 4,5 → FALSE → Skip
        }

        // Screen Output:
        // 4 5 6
    }

    for (i = 4; i <= 4; i++)
    {
        // ===== i = 4 =====
        // Output : 7 8 9 10
        // num becomes 11
    }

    for (i = 5; i <= 5; i++)
    {
        // ===== i = 5 =====
        // Output : 11 12 13 14 15
    }

    return 0;
    // Program end
}   
