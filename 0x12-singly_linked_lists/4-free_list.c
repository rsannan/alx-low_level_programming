#include <stdlib.h>
#include "lists.h"
/**
* free_list - prints all elements in a linked list
* @head: pointer to first element in list
*
* Return: void
*/
void free_list(list_t *head)
{
list_t *next_link;
while (head)
{
	next_link = head->next;
	free(head->str);
	free(head);
	head = next_link;
}
return;
}
