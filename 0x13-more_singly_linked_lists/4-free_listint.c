#include <stdlib.h>
#include "lists.h"
/**
* free_listint - frees a list
* @head: header pointer
*
* Return: Void
*/
void free_listint(listint_t *head)
{
listint_t *temp;
while (head)
{
	temp = head->next;
	free(head);
	head = temp;
}
return;
}
