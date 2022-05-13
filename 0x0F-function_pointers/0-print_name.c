#include "function_pointers.h"
#include <stddef.h>
/**
* print_name - prints a name
* @name: name
* @f: function pointer
*
* Return: void
*/
void print_name(char *name, void (*f)(char *))
{
if (*name != '\0' || f != NULL)
	f(name);
return;
}
