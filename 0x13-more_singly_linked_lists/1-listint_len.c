#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>
/**
 * listint_len - function name
 * @h: function pointer
 *
 * Description: returns the no of elements in a linked list
 * Return: no of nodes
 */
size_t listint_len(const listint_t *h)
{
size_t node_no = 0;

while (h != NULL)
{
node_no++;
h = h->next;
}

return (node_no);
}
