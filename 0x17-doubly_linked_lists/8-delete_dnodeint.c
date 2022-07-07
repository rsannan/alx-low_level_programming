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
	dlistint_t *tmp, *copy = *head;
	unsigned int node;

	if (copy == NULL)
		return (-1);

	for (node = 0; node < (index - 1); node++)
	{
		if (copy == NULL)
			return (-1);

		copy = copy->next;
	}
	if (copy == *head)
	{
		*head = copy->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		tmp = copy->prev;
		tmp->next = copy->next;
		if (copy->next != NULL)
			copy->next->prev = tmp;
	}
	free(copy);
	return (1);
}
