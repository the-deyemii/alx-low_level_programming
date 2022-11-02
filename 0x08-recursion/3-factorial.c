#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * factorial - finds factorial
 * @n: parameter
 *
 * Description: sed
 * Return: 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	if (n == 1)
	{
		return (1);
	}
	if (n > 1)
	{
		return (n * factorial(n - 1));
	}
	return (0);
}
