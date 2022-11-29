#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list- function
 * @h: pointer
 *
 * Description: prints element of a list
 * Return: no of nodes
 */
size_t print_list(const list_t *h)
{
size_t n = 0;

while (h != NULL)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%d] %s\n", h->len, h->str);
}
h = h->next;
n++;
}

return (n);
}



