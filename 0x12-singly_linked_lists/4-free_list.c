#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
/**
* free_list - prints all elements in a linked list
* @head: pointer to first element in list
*
* Return: void
*/
void free_list(list_t *head)
{
int state = 0;
list_t *now = head;
list_t *pre_link;
if (now == NULL)
{
	free(now);
}
while (state == 0)
{
	pre_link = now;
	now = now->next;
	if (now->next == NULL)
		state = 1;
	free(pre_link->str);
	free(pre_link);
}
free(now->str);
free(now);
return;
}
