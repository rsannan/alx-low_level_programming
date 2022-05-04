#include "main.h"
/**
* main - Prints argument count
* @argc: argument count
* @argv: argument strings
*
* Return: void
*/

void main(int argc, char **argv)
{
(void)argv;
int tens, ones;

if (argc > 10)
{
	tens = ((argc / 10) % 10);
	_putchar(tens + '0');
}
ones = argc % 10;
_putchar(ones + '0');
_putchar('\n');

return;
}
