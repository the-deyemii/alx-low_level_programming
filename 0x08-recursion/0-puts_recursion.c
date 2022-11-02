#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: parameter
 *
 * Description:
 * Return: 0
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
	_putchar('\n');
}
