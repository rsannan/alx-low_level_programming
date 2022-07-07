#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes the node at a given
 *                           index of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @index: The index of the node to be deleted - indices start at 0.
 *
 * Return: On success - 1.
 *         On failure - -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp, *prev, *copy = *head;
	unsigned int node;

	if (copy == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}

	for (node = 0; node < index; node++)
	{
		if (copy == NULL)
			return (-1);

		copy = copy->next;
	}

	tmp = copy->next;
	prev = copy->prev;
	prev->next = tmp;
	tmp->prev = prev;
	free(copy);
	return (1);
}
