#include <stdio.h>
/**
 * main - Emtry point
 * Return: suck your totoros
 */
int main(void)
{
	char ag = 'a';

	while (ag <= 'z')
	{
		if ((ag != 'e') && (ag != 'q'))
		{
			putchar(ag);
		}
		ag++;
	}
	putchar('\n');

	return (0);
}
