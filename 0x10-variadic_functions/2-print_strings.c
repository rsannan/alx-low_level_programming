#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
* print_strings - prints string
* @separator: separator string
* @n: number of arguments
*
* Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int index;
char *s;
va_list ap;
va_start(ap, n);

for (index = 0; index < n; index++)
{
	s = va_arg(ap, char *);
	if (s != NULL)
	{
		printf("%s", s);
	}
	else
	{
		printf("(nil)");
	}
	if (index + 1 != n && separator != NULL)
	{
		printf("%s", separator);
	}
}
va_end(ap);
printf("\n");
return;
}
