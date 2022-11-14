#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * new_dog - function
 * @name: parameter
 * @age: parameter
 * @owner: paarameter
 *
 * Description: creates a new dog
 * Return: 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
struct dog *dogs;

dogs = malloc(sizeof(struct dog));
if (dogs == NULL)
return (NULL);

dogs->name = name;
dogs->age = age;
dogs->owner = owner;
return (dogs);
}
