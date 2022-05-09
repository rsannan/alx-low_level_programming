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
unsigned int i;
void *s;

if (nmemb <= 0 || size <= 0)
	return (NULL);
s = malloc(size * nmemb);

if (s == NULL)
	return (NULL);
for (i = 0; i < nmemb; i++)
{
	s[i] = 0;
}
return (s);
}
