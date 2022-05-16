#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
#include "string.h"
#include "variadic_functions.h"
/**
* print_all - prints anything
* @format: constant string pointer
*
* Return: Void
*/
void print_all(const char * const format, ...)
{
char types[] = {'c', 'i', 'f', 's'};
char convert[] = {"%c", "%d", "%f", "%s"}
int num_args = strlen(format);
int index = 0, arr_ind;
va_list ap;
va_start(ap, format);
while (index < num_args)
{
	arr_ind = 0;
	while (arr_ind < 4)
	{
		if (format[index] == types[arr_ind])
		{
			printf();
		}
	}
	index++;
}

return;
}
