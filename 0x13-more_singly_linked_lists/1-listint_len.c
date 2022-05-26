#include <stddef.h>
#include "lists.h"
/**
* listint_len - returns the number of elements in a linked list
* @h: head pointer
*
* Return: Number of elements
*/
size_t listint_len(const listint_t *h)
{
int count = 0;
const listint_t *now;

if (h == NULL)
{
	return (0);
}
now = h;
while (now)
{
	count++;
	now = now->next;
}
return (count);
}
