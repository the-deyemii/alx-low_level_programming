#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 * Description: print Fibonacci numbers
 * Return: baba iya e
 */
int main(void)
{
	int i, n;
	long t1 = 0, t2 = 1;
	long next_term;

	n = 50;
	next_term = t1 + t2;

	for (i = 3; i <= n; i++)
	{
		printf("%ld, ", next_term);
		t1 = t2;
		t2 = next_term;
		next_term = t1 + t2;

		if (n == 50)
		{
			printf("%ld", next_term);
		}
	}
	printf("\n");
	return (EXIT_SUCCESS);
}
