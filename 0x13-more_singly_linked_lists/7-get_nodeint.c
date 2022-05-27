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
unsigned int count = 0;
listint_t *temp = head;

if (head == NULL)
	return (NULL);
if (index == 0)
{
return (head->next);
}
for (count = 0; count < index; count++)
{
	if (temp->next == NULL)
		return (NULL);
	temp = temp->next;
}
return (temp);
}
