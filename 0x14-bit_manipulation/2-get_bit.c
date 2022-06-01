#include "main.h"
/**
* get_bit - returns value of a bit at a given index
* @n: decimal value of integer
* @index: index to get
*
* Return: value of bit otherwise -1
*/
int get_bit(unsigned long int n, unsigned int index)
{
unsigned int num;
if ((n >> index) < 1 )
	return (-1);

num = n >> index;

return (num & 1);
}
