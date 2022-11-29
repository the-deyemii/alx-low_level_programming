#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>
/**
 * pop_listint - function name
 * @head: linked list
 *
 * Description: delete's the head node and returns the head node's data
 * Return: deleted head node's data
 */
int pop_listint(listint_t **head)
{
int data;
listint_t *temp;

if (*head == NULL)
{
return (0);
}

temp = *head;

data = temp->n;

*head = temp->next;
free(temp);

return (data);
}
