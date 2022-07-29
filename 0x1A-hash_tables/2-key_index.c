#include "hash_tables.h"
/**
* key_index - gives the index of a key
* @key: the key in question
* @size: the size of the has array
*
* Return: index of key/value pair
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	hash_value = hash_djb2(key) % size;

	return (hash_value);
}
