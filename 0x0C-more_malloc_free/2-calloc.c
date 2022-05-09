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
s = malloc(size * nmemb);

if (s == NULL)
	return (NULL);
while (i < nmemb)
{
	*((int *) s + i) = 0;
	i = i + size;
}
return (s);
}
