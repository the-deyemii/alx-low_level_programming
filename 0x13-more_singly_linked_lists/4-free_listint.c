#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>
/**
 * free_listint - frees a block of memory used for alinked list
 * @h: pointer to the first node of the list
 *
 * Description: as seen above
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
listint_t *temp;

while (head)
{
temp = head;
head = head->next;
free(temp);
}

free(head);
}
