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
	dlistint_t *new;

	new = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->prev = NULL;
	new->n = n;
	new->next = *head;
	if (*head != NULL)
	{
		(*head)->prev = new;
	}
	*head = new;

	return (new);
}
