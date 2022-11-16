#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function
 * @array: array to be worked on
 * @size: size of array
 * @action: pointer to a function used to compare values
 * Description:  function that executes a function given as a parameter
 * Return: o
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i; /* match data type */

	if (array != NULL && action != NULL)
		for (i = 0; i < size; i++)
			action(*(array + i));
}
