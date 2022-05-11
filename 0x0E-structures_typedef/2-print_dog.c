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
		d->name = "(nil)";

	if ((*d).owner == NULL)
		d->owner = "(nil)";


	if ((*d).age == 0)
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n", (*d).name, (*d).age, (*d).owner);
	}
	else
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n", (*d).name, (*d).age, (*d).owner);
	}
}
return;
}
