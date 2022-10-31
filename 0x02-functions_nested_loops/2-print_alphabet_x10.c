#include "main.h"
/**
 * print_alphabet_x10 - print alphabets20 times
 * Return: iya yin
 */

void print_alphabet_x10(void)
{
	int y;
	int x = 0;

	while (x < 10)
	{
		y = 'a';

		while (y <= 'z')
		{
			_putchar(y);
			y++;
		}
		x++;
		_putchar('\n');
	}
}
