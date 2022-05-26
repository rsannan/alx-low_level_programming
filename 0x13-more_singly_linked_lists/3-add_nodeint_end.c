#include <string.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
/**
* add_nodeint_end - adds new node to end of list
* @head: head node
* @n: number to be added to node
*
* Return: pointer to new node otherwise NULL if fail
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
int state = 0;
listint_t *now;
listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));

if (new_node == NULL)
{
	return (NULL);
}

new_node->n = n;
new_node->next = NULL;

if (*head == NULL)
{
	*head = new_node;
}
else
{
	now = *head;
	while (state == 0)
	if (now->next != NULL)
	{
		now = now->next;
	}
	else
	{
		now->next = new_node;
		state = 1;
	}
}
return (new_node);
}
