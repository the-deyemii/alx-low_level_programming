#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * is_prime_number - function
 * @n: parameter
 *
 * Description: prints 1 if n is a prime no, otherwise 0
 * Return: 0
 */
int is_prime_number(int n)
{
	if (n == 1)
	{
		return (0);
	}
	if (n % 2 == 0)
	{
		return (0);
	}
	if (n % 2 == 1)
	{
		return (1);
	}
	return (0);

}
