#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
/**
* insert_nodeint_at_index - inserts a new node at a given position.
* @head: head pointer
* @idx: index position
* @n: number;
*
* Return: newnode otherwise NULL
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int count = 0, state = 1;
listint_t *temp = *head;
listint_t *index;
listint_t *newnode = (listint_t *)malloc(sizeof(listint_t));
if (newnode == NULL)
	return (NULL);
newnode->n = n;
while (temp)
{
	if (count != (idx - 1))
	{
		count++;
		temp = temp->next;
	}
	else
	{
		state = 0;
		break;
	}

}
if (state == 1)
{
	return (NULL);
}

else if (state == 0)
{
	index = temp->next;
	temp->next = newnode;
	newnode->next = index;
}
return (newnode);
}
