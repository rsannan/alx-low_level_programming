#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
*
* Return: Always 1
 */

int main(void)
{
int fail = 2;
if (fail == 2)
{
fwrite("and that piece of art is useful\"", 33, 1, stderr);
fwrite("- Dora Korpar, 2015-10-19\n", 27, 1, stderr);
fflush(stderr);
return (1);
}
return (0);
}
