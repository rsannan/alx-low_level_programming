#include "lists.h"
/**
* insert_dnodeint_at_index - inserts a new node at a given position.
* @h: head pointer
* @idx: index position
* @n: number;
*
* Return: newnode otherwise NULL
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *prev, *copy = *h;
	unsigned int node;


	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	if (*h == NULL)
		return (NULL);

	for (node = 0; node < idx ; node++)
	{
		if (copy == NULL)
		{
			return (NULL);
		}

		copy = copy->next;
	}
	if (copy->next == NULL)
		return (add_dnodeint_end(h, n));
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	prev = copy->prev;
	new->next = copy;
	new->prev = prev;
	prev->next = new;
	copy->prev = new;

	return (new);
}
