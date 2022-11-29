#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>
/**
 * free_listint2 - frees a linked list
 * @head: pointer to a pointer
 *
 * Description: frees a linked list and sets the head to NULL
 * Return: NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head)
	{
		while (*head)
		{
			temp = (*head);
			*head = (*head)->next;
			free(temp);
		}
	}
	else
	{
		return;
	}

	free(*head);
	head = 0;
}
