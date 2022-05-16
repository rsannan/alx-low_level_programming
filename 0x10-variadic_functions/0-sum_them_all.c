#include <stdarg.h>
#include "variadic_functions.h"
/**
* sum_them_all - sums all the parameters
* @n: number of numbers to sum
*
* Return: sum of all parameters
*/
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int sum;
if (n == 0)
{
sum = 0;
}
else
{
va_list ap;
va_start(ap, n);
sum = 0;
for (i = 0; i < n; i++)
{
	sum += va_arg(ap, int);
}
va_end(ap);
}
return (sum);
}
