#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_number - using putchar to pring numbers.
 * @n: parameter
 *
 * Description:
 * Return: 0
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar(' ');
		n = -n;
	}
	if (n / 10)
	{
		print_number(n / 10);
		_putchar(n % 10 + '0');
	}
}
