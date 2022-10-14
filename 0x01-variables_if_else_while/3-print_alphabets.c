#include <stdio.h>
/**
 * main - Entry point
 * return: una papa
 */

int main(void)
{
        char ch = 'a';
       char ax = 'A';
       for (ax = 'A'; ch <= 'Z'; ch++)
              putchar(ax);
       
       	for (ch = 'a'; ch <= 'z'; ch++)
              putchar(ch);

       	putchar('\n');
        return (0);
}
