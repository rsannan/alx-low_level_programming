#include "main.h"
/**
* square - find perfect square of y
* @x: square
* @y: number
*
* Return: x or -1
*/
int square(int x, int y)
{
int squarenum;

if ((x ^ 2) == y)
{
	return (x);
}
else if (x > (y / 2))
{
	return (-1);
}
else
{
	x = (x + 1);
	squarenum = square(x, y);
}
return (squarenum);
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
