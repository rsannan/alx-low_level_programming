#include "main.h"
/**
* factorial - returns the factorial of a given number
* @n: the number
*
* Return: n factorial
*/

int factorial(int n)
{
int sum;
if (n < 0)
{
	return (-1);
}
else if (n == 0)
{
	return (1);
}
else
{
	sum = n * factorial(n - 1);
}
return (sum);
}
