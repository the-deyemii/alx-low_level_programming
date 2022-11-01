#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - prints whatever i say
 *
 * Description: multiples of 3 and 5 printing Fizzbuzz
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if ((x % 3 == 0) && (x % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (x % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (x % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d", x);
		}

		if (x != 0)
		{
			printf(" ");
		}
	}
	printf("\n");

	return (0);
}
