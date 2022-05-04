#include "main.h"
/**
* square - find perfect square of y
* @x: square
* @n: number
*
* Return: x or -1
*/
int square(int x, int n)
{
int squarenum;

squarenum = x * x;
if (squarenum == n)
{
	return (x);
}
else if (x > n)
{
	return (-1);
}
x = x + 1;
return (square(x, n));
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

x = square(1, n);

return (x);
}
