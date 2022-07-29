#include "hash_tables.h"
/**
* hash_table_get-retrieves a value associated with a key
* @ht: hashtable
* @key: the key to look for
*
* Return: value of the key otherwise NULL
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned int index;

	if (key == NULL || ht == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			return (node->value);
		}
		node = node->next;
	}
	return (NULL);
}
