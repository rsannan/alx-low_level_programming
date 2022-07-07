#include "lists.h"
/**
* sum_dlistint - sums all num elements in listint_t
* @head: head pointer
*
* Return: sum of n otherwise 0
*/
int sum_dlistint(dlistint_t *head)
{
	int sum_n = 0;
	dlistint_t *now = head;
	if (head == NULL)
		return(sum_n);
	while (now != NULL)
	{
		sum_n = sum_n + now->n;
		now = now->next;
	}
	return (sum_n);
}
