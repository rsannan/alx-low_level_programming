#include "lists.h"
/**
* add_dnodeint - adds a new node to beginning of the list
* @head: the head pointer
* @n: number to add
*
* Return: the address of the new element or NUll if fail
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *next;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->prev = NULL;
	new->n = n;
	next = *head;
	*head = new;
	if (next == NULL)
	{
		new->next = NULL;
		return (new);
	}
	new->next = next;
	return (new);
}
