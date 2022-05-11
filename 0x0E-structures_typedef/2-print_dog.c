#include "dog.h"
#include <stdio.h>
#include <stddef.h>
/**
* print_dog - prints dog struct
* @d: dog struct
*
* Return: void
*/

void print_dog(struct dog *d)
{
if (!(d == NULL))
{
	if ((*d).name == NULL)
		printf("Name: (nil)\nAge: %f\nOwner: %s\n", (*d).age, (*d).owner);

	else if ((*d).age == 0)
		printf("Name: %s\nAge: (nil)\nOwner: %s\n", (*d).name, (*d).owner);

	else if ((*d).owner == NULL)
		printf("Name: %s\nAge: %f\nOwner: (nil)\n", (*d).name, (*d).age);

	else
		printf("Name: %s\nAge: %f\nOwner: %s\n", (*d).name, (*d).age, (*d).owner);
}
return;
}
