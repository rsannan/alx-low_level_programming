#include "lists.h"
/**
* get_dnodeint_at_index - returns the nth node of a listint_t linked list
* @head: head pointer
* @index: nth position
*
* Return: the nth node otherwise NULL
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int node;
	dlistint_t *n_node = head;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		if (n_node == NULL)
			return (NULL);

		n_node = n_node->next;
	}

	return (n_node);
}
