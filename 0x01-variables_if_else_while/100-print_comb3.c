 #include <stdio.h>
 #include <stdlib.h>
/**
 * main - prints all combination of numbers
 *
 * Return: Always 0
 */

int main(void)
{
int num1;
int num2;

for (num1 = 0; num1 < 10; num1++)
{
        for (num2 = 1; num2 < 10; num2++)
        {
                putchar(num1 + '0');
                putchar(num2 + '0');
                putchar(',');
                putchar(' ');
        }
}
 
putchar('\n');

 return (0);
}
