#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
/**
* add_nodeint_end - add node to the end of list
* @head: head pointer
* @n: number to be added
*
* Return: new node otherwise NULL
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *temp;
listint_t *newnode = (listint_t *)malloc(sizeof(listint_t));

if (newnode == NULL)
	return (NULL);

newnode->n = n;
newnode->next = NULL;
if (*head == NULL)
{
	*head = newnode;
}
else
{
	temp = *head;
	while(temp)
	{
		if (temp->next == NULL)
			temp->next = newnode;
		
		else
			temp = temp->next;
	}
}
return (newnode);
}
