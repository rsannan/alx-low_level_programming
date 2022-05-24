#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
* list_len - returns number of elements in a linked list
* @h: pointer to first element in list
*
* Return: count of elements in list
*/
size_t list_len(const list_t *h)
{
int state = 0, count = 0;
const list_t *now = h;
while (state != 1)
{
	if (now->str == NULL)
	{
		count++;
	}
	else
	{
		count++;
	}
	if (now->next == NULL)
		state = 1;

	else
		now = now->next;
}
return (count);
}
