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
char *r;

if (nmemb <= 0 || size <= 0)
	return (NULL);
r = malloc(nmemb * size);

if (r == NULL)
	return (NULL);
while (i < nmemb)
{
	r[i] = '0';
	i = i + size;
}
s = r;
return (s);
}
