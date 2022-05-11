#include <stdlib.h>
#include <stddef.h>
#include <string.h>
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
int len = 0, index;
char new_name[strlen(name)];
char new_owner[strlen(owner)];

s = malloc(sizeof(dog_t));
if (s == NULL)
	return (NULL);
for (index = 0; name[index];index++)
	new_name[index] = name[index];

for (index = 0; owner[index]; index++)
	new_owner[index] = owner[index];

s->name = new_name;
s->age = age;
s->owner = new_owner;

return (s);
}
