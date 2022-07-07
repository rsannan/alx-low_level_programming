#include "lists.h"
/**
* dlistint_len - returns number of elements in a linked list
* @h: pointer to first element in list
*
* Return: count of elements in list
*/
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;
	const dlistint_t *now = h;

	if (h == NULL)
		return (0);

	while (now != NULL)
	{
		count++;
		now = now->next;
	}
	return (count);
}
