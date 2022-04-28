#include "main.h"
/**
* _pow_recursion - returns the value of x raised to the power of y
* @x: first integer
* @y: power of integer
*
* Return: sum if greater than 0 -1 otherwise
*/

int _pow_recursion(int x, int y)
{
if (y < 0)
int sum;

{
	return (-1);
}

else if (y == 0)
{
	return (1);
}
else
{
	sum = x * _pow_recursion(x, (y - 1));
}
return (sum);
}
