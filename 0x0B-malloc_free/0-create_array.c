#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * *create_array - crreates array and initializes with a specific char
 * @size: parameter
 * @c: parameter
 *
 * Description: already done that
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	char *i;
	unsigned int a;

	if (size <= 0)
	{
		return (NULL);
	}
	i = malloc(sizeof(*i) * size);

	/**i = c;*/

	if (i == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < size; a++)
	{
		*(i + a) = c;
	}
	if (i != NULL)
	{
		return (i);
	}
	return (0);

}
