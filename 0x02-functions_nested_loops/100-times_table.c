#include <stdlib.h>
#include <stdio.h>
#include "main.h"

void print_times_table(int n)
{
    int num = 0, res, i, j;
    
    
  if (n >= 0 && n <= 15)
  {
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n; j++)
        {
            res = num * j;
            printf("%d", res);
            
           // if (n < 0 || n > 15)
               // printf("\n");

            if (j != n)
            {
                if (res < 9)
                    printf(",   ");
                
                if (res == 9)
                    printf(",   ");
                
                if ((res > 9) && (res < 91))
                    printf(",  ");
                
                //if (res == 90)
                 //   printf(",  ");
                
                if (res > 90)
                    printf(", ");
                
            }
        }
        printf("\n");
        num++;
    }
}
}
