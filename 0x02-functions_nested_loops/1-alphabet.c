#include <stdio.h>
#include "main.h"
/**
 * main - Check my code
 * Return: LGBTQ+
 */
int main(void)
{
	char v = 'a';
	print_alphabet(v);
	putchar('\n');
	return (0);
}

/**
 * print_alphabet - prints alphabet
 *
 * Return koshi plix
 */

void print_alphabet(char v)
{
	for (v = 'a'; v <= 'z'; v++)
	{
		putchar(v);
	}
}
