#include "main.h"
/**
* _atoi - convert a string to an integer.
* @s: the string to be comverted.
*
*Return: The integer value of the comverted string.
*/
int _atoi(char *s)
{
int sign = 1;
unsigned int num = 0;

do {

	if (*s == '-')
		sign *= -1;

	else if (*s >= '0' && *s <= '9')
		num = (num * 10) + (*s - '0');

	else if (num > 0)
		break;
} while (*s++);

return (num * sign);
}
/**
* print_number - prints an integer
* @n: integer to be printed
*
* Return: void
*/
void print_number(int n)
{
unsigned int i = n;

if (n < 0)
{
	_putchar('-');
	i = -n;
}

if ((i / 10) > 0)
{
	print_number(i / 10);
}

_putchar((i % 10) + '0');

return;
}
/**
* main - multiplies 2 numbers
* @argc: argument count
* @argv: argument string
*
* Return: void
*/
int main(int argc, char **argv)
{
int product;

if (argc < 3)
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
	return (1);
}
product = _atoi(argv[1]) * _atoi(argv[2]);
print_number(product);
_putchar('\n');
return (0);
}
