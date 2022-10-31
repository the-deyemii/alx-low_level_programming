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
	int t1 = 0, t2 = 1;
	int next_term;
	n = 50;
	next_term = t1 + t2;

	for (i = 3; i <= n; i++)
	{
		printf("%d, ", next_term);
		t1 = t2;
		t2 = next_term;
		next_term = t1 + t2;

		if (n == 50)
		{
			printf("%d", next_term);
		}
	}	
	printf("\n");
	return (EXIT_SUCCESS);
}
