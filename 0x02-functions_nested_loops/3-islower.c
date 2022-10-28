#include "main.h"
/**
 * _islower - checkd for lowercase letters
 * @c - parameter
 * Return: koni dafun yin
 */

int _islower(int c)
{
	if (c >= 97 && c <= 'z')
	{
		_putchar('1');
	}
	else 
	{
		_putchar('0');
	}
	return (0);
}
