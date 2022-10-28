#include "main.h"
/**
 * _isalpha - checks fkr alphabets
 * @c: parameter
 * Return: i gorrit, morafukas
 */

int _isalpha(int c)
{
	if ((c >= 'a') && (c <= 122))
	{
		return (1);
	}
	else if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
