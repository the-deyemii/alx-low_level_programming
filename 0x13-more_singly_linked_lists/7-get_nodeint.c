#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - function name
 * @head: pointer
 * @index: index of node
 * Description: prints the data in an index passed in
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;

if (head == NULL)
{
return (NULL);
}

while ((i < index) && head != NULL)
{
head = head->next;
i++;
}

if (i == index)
{
return (head);
}

return (NULL);
}
