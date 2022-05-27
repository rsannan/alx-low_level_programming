#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
/**
* get_nodeint_at_index - returns the nth node of a listint_t linked list
* @head: head pointer
* @index: nth position
*
* Return: the nth node otherwise NULL
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
