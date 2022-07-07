#include "lists.h"
/**
* print_dlistint - prints all elements in a linked list
* @h: pointer to first element in list
*
* Return: count of elements in list
*/
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;
	const dlistint_t *now = h;

	if (h == NULL)
		return (0);
	while (now != NULL)
	{
		printf("%d\n", now->n);
		now = now->next;
		count++;
	}

	return (count);
}
