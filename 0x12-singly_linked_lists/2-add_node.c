#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
* add_node - adds a new node to beginning of the list
* @head: the head pointer
* @str: string to add
*
* Return: the address of the new element or NUll if fail
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node = (list_t *)malloc(sizeof(list_t));
if (new_node == NULL)
{
	return (NULL);
}

new_node->str = strdup(str);
new_node->len = strlen(str);
new_node->next = *head;

*head = new_node;
return (new_node);
}
