#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _pow_recursion - raises var x to y
 * @x: parameter
 * @y: parameter
 * Description: sed
 * Return: 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y > 0)
	{
		return (_pow_recursion(x, y - 1) * x);
	}
	return (0);
}
