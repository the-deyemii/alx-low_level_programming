#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * free_dog - function
 * @d: parameter
 *
 * Description: frees memory space
 * Return: 0
 */
void free_dog(dog_t *d)
{
if (d == NULL)
return;

if (d->name)
free(d->name);
if (d->owner)
free(d->owner);

free(d);
}
