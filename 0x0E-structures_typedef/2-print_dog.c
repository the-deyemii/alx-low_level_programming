#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints struct dog
 * @d: parameter
 *
 * Description: in 2 lines above
 * Return: 0
 */
void print_dog(struct dog *d)
{
if (d == NULL)
return;

if (d->name == NULL)
printf("Name: (nil)");
else
printf("Name: %s\n", d->name);

printf("Age: %f\n", d->age);

if (d->owner == NULL)
printf("Owner: (nil)");
else
printf("Owner: %s\n", d->owner);
}
