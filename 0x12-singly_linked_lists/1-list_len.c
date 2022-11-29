#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len- Show number of elements of a list
 * @h: linked list
 *
 * Description: what i said it does
 * Return: no of elements in a list
 */
size_t list_len(const list_t *h)
{
size_t length = 0;

while (h != NULL)
{
length++;
h = h->next;
}

return (length);
}
