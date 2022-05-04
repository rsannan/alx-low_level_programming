#include "main.h"
/**
 * print_number - prints numbers
 * @n: number to be printed
 * Return:void
 */

void print_number(int n)
{
	unsigned int x;

	x = n;
	if (n < 0)
	{
		_putchar(45);
		x = -n;
	}
	if (x / 10)
		print_number(x / 10);
	_putchar((x % 10) + '0');
}
/**
 * _atoi - convert a string to an integer.
 * @s: the string to be comverted.
 *
 *Return: The integer value of the comverted string.
 */

int _atoi(char *s)
{
	unsigned int num = 0;

	do {

		if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');

		else if (num > 0)
			break;
	} while (*s++);

	return (num);
}
/**
* main - prints sum of positive numbers
* @argc: argument count
* @argv: argument string
*
* Return: o if error otherwise 1
*/
int main(int argc, char **argv)
{
int i, sum = 0;

if (argc < 2)
{
	_putchar('0');
	_putchar('\n');
	return (0);
}
for (i = 1; i < argc; i++)
{
	int j = 0;

	while (argv[i][j] != '\0')
	{
		if (!(argv[i][j] <= 57 && argv[i][j] >= 48))
		{
			_putchar('E');
			_putchar('r');
			_putchar('r');
			_putchar('o');
			_putchar('r');
			_putchar('\n');
			return (1);
		}
		j++;
	}
	sum = sum + _atoi(argv[i]);
}
print_number(sum);
_putchar('\n');
return (0);
}
