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
 * Description: 
 * Return: pointer to a copy of given string as parameter
 */
char *_strdup(char *str)
{
	if (_strlen(str) == 0)
	{
		return (NULL);
	}
	malloc(sizeof(char) * i)

