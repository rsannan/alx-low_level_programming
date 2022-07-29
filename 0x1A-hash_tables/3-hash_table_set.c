#include "hash_tables.h"
/**
* hash_table_set - Adds an element to the hash table
* @ht: hash table
* @key: key
* @value: value
*
* Return: 1 if success otherwise 0
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int id, i;
	hash_node_t *new;
	char *val;

	if (key == NULL || value == NULL || ht == NULL)
		return (0);

	val = strdup(value);

	if (val == NULL)
		return (0);

	id = key_index((const unsigned char *)key, ht->size);
	for (i = id; ht->array[i], i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = val;
			return (1);
		}

	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(val);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = val;
	new->next = ht->array[id];
	ht->array[id] = new;

	return (1);
}
