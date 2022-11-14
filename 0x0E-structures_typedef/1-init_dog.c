#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializes variable of type struct dog
 * @d : struct
 * @name : parameter
 * @age : age
 * @owner : parameter
 * Description: does what it says
 * Return: 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
rerurn;

d->name = name;
d->age = age;
d->owner = owner;
}

