#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - find and print largest prime factor
 *
 * Description:
 * Return: 0
 */
int main(void)
{
	long int n, div, maxFact;

	n = 612852475143;

	div = 2;

	while (n != 0)
	{
		if (n % div != 0)
		{
			div = div + 1;
		}
		else
		{
			maxFact = n;
			n = n / div;
			if (n == 1)
			{
				printf("%ld", maxFact);
				break;
			}
		}
	}
	return (0);
}
