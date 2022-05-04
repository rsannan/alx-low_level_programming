#include "main.h"
/**
* main - Prints argument count
* @argc: argument count
* @argv: argument strings
*
* Return: void
*/

int main(int argc, char **argv __attribute__((unused)))
{
int tens, ones;

if (argc > 10)
{
	tens = ((argc / 10) % 10);
	_putchar(tens + '0');
}
ones = (argc % 10) - 1;
_putchar(ones + '0');
_putchar('\n');

return (0);
}
