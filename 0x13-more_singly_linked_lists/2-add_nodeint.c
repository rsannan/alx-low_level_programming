#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
/**
* add_nodeint - adds a new node at the start of a list
* @h: head pointer
* @n: number to add to list
*
* Return: address of new element otherwise NULL
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newnode = (listint_t *)malloc(sizeof(listint_t));
if (newnode == NULL)
	return (NULL);

newnode->n = n;
newnode->next = *head;
*head = newnode;

return (newnode);
}
