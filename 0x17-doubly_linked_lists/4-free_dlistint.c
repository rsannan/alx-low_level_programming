#include "lists.h"
/**
* free_dlistint - prints all elements in a linked list
* @head: pointer to first element in list
*
* Return: void
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next_link;
while (head)
{
	next_link = head->next;
	free(head);
	head = next_link;
}
return;
}
