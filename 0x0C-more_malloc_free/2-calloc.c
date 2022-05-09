#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
* calloc - allocates memory and initialiozes it to 0
* @nmemb: array
* @size: size of array
*
* Return: s if successful or NULL otherwise
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i = 0;
void *s;

if (nmemb <= 0 || size <= 0)
	return (NULL);
s = malloc(nmemb * size);

if (s == NULL)
	return (NULL);

if (size == 1)
{
	for (i = 0; i < nmemb; i++)
	{
		*((char *)s + i) = '0';
	}
}
if (size == 2 || size == 4)
{
	for (i = 0; i < nmemb; i++)
	{
		*((int *)s + i) = 0;
	}
}
return (s);
}
