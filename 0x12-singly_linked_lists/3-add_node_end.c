#include <string.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
/**
* add_node_end - adds new node to end of list
* @head: head node
* @str: string to be added to node
*
* Return: pointer to new node otherwise NULL if fail
*/
list_t *add_node_end(list_t **head, const char *str)
{
int state = 0;
list_t *now;
list_t *new_node = (list_t *)malloc(sizeof(list_t));

if (new_node == NULL)
{
	return (NULL);
}

new_node->str = strdup(str);
new_node->len = strlen(str);
new_node->next = NULL;

if (*head == NULL)
{
	*head = new_node;
}
else
{
	now = *head;
	while (state == 0)
	if (now->next != NULL)
	{
		now = now->next;
	}
	else
	{
		now->next = new_node;
		state = 1;
	}
}
return (new_node);
}
