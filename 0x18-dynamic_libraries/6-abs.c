#include "main.h"
/**
* _abs - get absolute value of int
* @num: number to be absoluted
*
* Return: Always result
*/

int _abs(int num)
{
int result;

if (num < 0)
{
	result = (-(num));

	return (result);
}
else
{
	result = num;

	return (result);
}
}
