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
	if (*h == NULL)
		return (NULL);

	for (node = 0; node < idx ; node++)
	{
		if (copy == NULL)
		{
			free(new);
			return (NULL);
		}

		copy = copy->next;
	}

	prev = copy->prev;
	new->next = copy;
	new->prev = prev;
	prev->next = new;
	copy->prev = new;

	return (new);
}
