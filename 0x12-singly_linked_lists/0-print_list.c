#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
* print_list - prints all elements in a linked list
* @h: pointer to first element in list
*
* Return: count of elements in list
*/
size_t print_list(const list_t *h)
{
int state = 0, count = 0;
const list_t *now = h;
while (state != 1)
{
	if (now->str == NULL)
	{
		printf("[0] (nil)\n");
		count++;
	}
	else
	{
		printf("[%u] %s\n", now->len, now->str);
		count++;
	}
	if (now->next == NULL)
		state = 1;

	else
		now = now->next;
}
return (count);
}
