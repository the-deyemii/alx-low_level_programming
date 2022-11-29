#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - sums all data in linked list
 * @head: linked list
 *
 * Description: what it says above
 * Return: sum, or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
int sum;

if (head == NULL)
{
return (0);
}
sum = 0;

while (head != NULL)
{
sum += head->n;
head = head->next;
}

return (sum);
}
