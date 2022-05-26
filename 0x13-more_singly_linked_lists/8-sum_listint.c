#include <stddef.h>
#include "lists.h"
/**
* sum_listint - sums all num elements in listint_t
* @head: head pointer
*
* Return: sum of n otherwise 0
*/
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *temp = head;

if (head == NULL)
	return (0);

while (temp)
{
	sum = temp->n + sum;
	temp = temp->next;
}
return (sum);
}
