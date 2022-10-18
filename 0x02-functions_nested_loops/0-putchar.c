#include <stdio.h>
#include "main.h"
void task0(char *c)
/**
 * main - Header file
 * Return: First one down
 */

int main(void)
{
	char c[] = "_putchar";

	task0(c);
	putchar('\n');
	return (0);
}


void task0(char [a])
{
        int i = 0;

        while (a[i] != '\0')
        {
                putchar(a[i]);
                i++;
        }
}
