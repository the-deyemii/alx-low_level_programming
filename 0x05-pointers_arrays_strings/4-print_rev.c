/**
 * print_rev: reverse printing
 * @*str: piece of dhit
 * Return: ues, os courf!
 */
#include <string.h>
void print_rev(char *s)
{


    int i, len, temp;
    len = strlen(s); 
    for (i = 0; i < len/2; i++)
    {
        temp = s[i];
        s[i] = s[len - i - 1];
        s[len - i - 1] = temp;
    }
}
