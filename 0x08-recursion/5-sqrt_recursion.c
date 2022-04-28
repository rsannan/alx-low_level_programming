#include "main.h"
/**
* sqrt_sub - subtracts x to find perfect square of x
* @x: number
* @y: odd subtracter
*
* Return: sum
*/
int sqrt_sub(int x, int y)
{
int sum;

if (x == 0)
{
	return (0);
}
else if (x < 0)
{
	return (-1);
}
else
{
	y = y + 2;
	x = x - y;
	sum = 1 + sqrt_sub(x, y);
}
return (sum);
}
/**
* _sqrt_recursion - returns the natural square root of a number
* @n: number
*
* Return: x if perfect square or -1 otherwise
*/

int _sqrt_recursion(int n)
{
int x;

x = sqrt_sub(n, -1);

if ((x ^ 2) == n)
{
	return (x);
}
else if (n == 1)
{
	return (1);
}
else
{
 return (-1);
}
}
