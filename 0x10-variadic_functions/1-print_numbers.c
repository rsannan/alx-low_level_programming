#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include "variadic_functions.h"
/**
* print_numbers - prints numbers
* @separator: string printed between numbers
* @n: number of integers
*
* Return: Void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int index;
int num;
va_list ap;

va_start(ap, n);

for (index = 0; index < n; index++)
{
	if (separator == NULL)
	{
		num = va_arg(ap, int);
		printf("%d", num);
	}
	else
	{
		num = va_arg(ap, int);
		printf("%d", num);
		if (index + 1 != n)
		{
			printf("%s", separator);
		}
	}
}
va_end(ap);
printf("\n");
return;
}
