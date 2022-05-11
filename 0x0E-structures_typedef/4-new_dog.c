#include <stddef.h>
#include "dog.h"
/**
* new_dog - creates new dog 
* @name: name of dog
* @age: age of dog
* @owner: name of owner
*
* Return: s if success other wise NULL
*/

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *s;

s->name = name;
s->age = age;
s->owner = owner;

if (s == NULL)
	return (NULL);
return (s);
}
