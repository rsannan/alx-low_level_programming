#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
/**
* pop_listint - removes the first node
* @head: head pointer
*
* Return: value in old head otherwise 0
*/
int pop_listint(listint_t **head)
{
listint_t *temp;
int num;
if (*head == NULL)
	return (0);
temp = *head;
*head = (*head)->next;
num = temp->n;
free(temp);
return (num);
}
