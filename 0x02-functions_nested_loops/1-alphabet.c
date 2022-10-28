#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - prints alphabet
 *
 * Return koshi plix
 */

void print_alphabet(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}
