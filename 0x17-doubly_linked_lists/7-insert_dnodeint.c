#include "lists.h"
/**
* insert_dnodeint_at_index - inserts a new node at a given position.
* @head: head pointer
* @idx: index position
* @n: number;
*
* Return: newnode otherwise NULL
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *next, *copy = *h;
	unsigned int node;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = copy;
		copy->prev = new;
		*h = new;
		return (new);
	}
	if (*h = NULL)
		return (NULL);

	for (node = 0; node < (idx - 1); node++)
	{
		if (copy == NULL || copy->next == NULL)
			return (NULL);

		copy = copy->next;
	}

	next = copy->next;
	new->next = next;
	new->prev = copy;
	next->prev = new;
	copy->next = new;

	return (new);
}
