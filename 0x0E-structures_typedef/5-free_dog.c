#include <stdlib.h>
#include <stddef.h>
#include "dog.h"
/**
* free_dog - frees dog_t
* @d: dog_t to be freed
*
* Return: void
*/

void free_dog(dog_t *d)
{
if (d != NULL)
{
	free((*d).name);
	free((*d).owner);
	free(d);
}
return;
}
