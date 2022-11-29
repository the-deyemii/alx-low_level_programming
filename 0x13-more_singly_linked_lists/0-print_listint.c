#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - function name
 * @h: pointer parameter
 *
 * Description: Function that prints all elements of the list
 * Return: no of nudes.
 */
size_t print_listint(const listint_t *h)
{
size_t no = 0;

while (h != NULL)
{
printf("%d\n", h->n);

no += 1;
h = h->next;
}

return (no);
}
