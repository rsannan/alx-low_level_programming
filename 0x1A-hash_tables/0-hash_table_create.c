#include "hash_tables.h"
/**
 * hash_table_create - creates a has table
 * @size: size of the array
 *
 * Return: new hash table otherwise NULL.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = malloc(sizeof(hash_table_t) * size);

	if (new_table == NULL)
		return (NULL);

	new_table->size = size;


	return (new);
}
