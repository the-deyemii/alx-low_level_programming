#include "main.h"

/**
 * print_rev - function
 * @s: parameter
 */
void print_rev(char *s)
{
	int a = 0;
	int b;

	for (b = 0; s[b] != 0; b++)
	{
	}
	for (a = b - 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
