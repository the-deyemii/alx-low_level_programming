#include "main.h"
/**
 * print_alphabet_x10 - print alphabets 20 times
 * Return: iya yin
 */

void print_alphabet_x10(void)
{
	int x = 0, y;
	
	while (x <10)
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
