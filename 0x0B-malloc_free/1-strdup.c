#include <stdlib.h>
#include <stdio.h>
#include "main.h"
int _strlen(char *s);
/**
 * _strlen - gtes xter string
 * @s: parameter
 * Return: Always success
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	return (i);
}
/**
 * _strdup - does this and that
 * @str: parameter
 *
 * Description: what it does
 * Return: pointer to a copy of given string as parameter
 */
char *_strdup(char *str)
{
	char *i;
	int a;
	int b = _strlen(str);

	if (*str == '\0')
	{
	}
	if (str == NULL)
	{
		return (NULL);
	}

	i = malloc((sizeof(char) * b) + 1);

	if (i == NULL)
	{
		return (NULL);
	}

	for (a = 0; str[a] != '\0'; a++)
	{
		i[a] = str[a];
	}
	if (i != NULL)
	{
		return (i);
	}
	return (0);
}
