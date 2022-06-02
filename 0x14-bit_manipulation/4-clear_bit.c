#include "main.h"
/**
* clear_bit - sets the value of a bit at a given index to 1
* @n: decimal integer
* @index: given index
*
* Return: 1 otherwise -1
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int num = 1;
if (index > 32)
	return (-1);

*n &= ~(num << index);
return (1);
}
