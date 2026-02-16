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
         for (j = 1; j <= 5; j++)
        {
            
            if (j <= i)   
            {
                printf("%d ", num);
                 num++;    
                
            }
             printf("\n");
             }

    for (i = 2; i <= 2; i++)
    {
         for (j = 1; j <= 5; j++)
        {
             if (j <= i)   
            {
                printf("%d ", num);
                 num++;    
                 }
 if (j <= i)   // 2 <= 2 → TRUE
            {
                printf("%d ", num);
                // Output : 3

                num++;    
                 }
           
        }

        printf("\n");
        for (i = 3; i <= 3; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            
        }
    }

    for (i = 4; i <= 4; i++)

    for (i = 5; i <= 5; i++)

    return 0;
    
}

    }
}
           
           