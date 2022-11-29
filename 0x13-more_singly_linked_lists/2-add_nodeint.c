#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>
/**
 * add_nodeint - function name
 * @head: pointer to a pointer
 * @n: address of the new element
 *
 * Description: adds a new node at the beginning of a linkedlist
 * Return: the address of the new element or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *temp;
if (head != NULL)
{
temp = malloc(sizeof(listint_t));
if (temp == NULL)
{
return (NULL);
}

temp->n = n;
temp->next = *head;
*head = temp;
}

return (temp);
}
