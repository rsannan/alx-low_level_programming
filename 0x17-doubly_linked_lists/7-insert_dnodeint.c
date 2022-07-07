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
	dlistint_t *new, *copy = *h;
	unsigned int node;


	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	if (*h == NULL)
		return (NULL);

	for (node = 0; node < (idx - 1) ; node++)
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
	new->prev = copy;
	new->next = copy->next;
	copy->next->prev = new;
	copy->next = new;

	return (new);
}
