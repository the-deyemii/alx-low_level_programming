#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - function to allocate memory
 * @b: parameter
 *
 * Description: allocates memory
 * Return: 0
 */
void *malloc_checked(unsigned int b)
{
void *a;

a = malloc(b);

if (a == NULL)
{
exit(98);
}
return (a);
}
