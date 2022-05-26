#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
/**
* free_listint2 - frees a listint_t and sets head to NULL
* @head: head pointer
*
* Return: void
*/
void free_listint2(listint_t **head)
{
listint_t *new_head = *head;
listint_t *temp;
*head = NULL;
while (new_head)
{
	temp = new_head->next;
	free(new_head);
	new_head = temp;
}
return;
}
