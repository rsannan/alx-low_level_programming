#include "main.h"
/**
* main - prints sum of positive numbers
* @argc: argument count
* @argv: argument string
*
* Return: o if error otherwise 1
*/
int main(int argc, char **argv)
{
int i, sum;
if (argc < 2)
{
	_putchar('0');
	_putchar('\n');
}
for (i = 0; i < argc; i++)
{
	if (!(argv[i] <= 57 && argv[i] >= 48))
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (1);
	}

}
}
