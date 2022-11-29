#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list
 * @head: original linked list
 * @str: string to add to the node
 *
 * Description: what it says
 * Return: address of thenew list or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *temp;

if (head != NULL && str != NULL)
{
temp = malloc(sizeof(list_t));
if (temp == NULL)
{
return (NULL);
}

temp->str = strdup(str);
temp->len = strlen(str);
temp->next = *head;

return (temp);

}
return (0);
}
