#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
* malloc_checked - allocated memory using malloc
* @b: size of memory
*
* Return: pointer to memory if success or 98 otherwise
*/

void *malloc_checked(unsigned int b)
{
void *s;

s = malloc(b);
if (s == NULL)
{
	exit(98);
}
else
{
	return (s);
}
}
