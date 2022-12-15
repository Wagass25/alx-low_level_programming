#include <limits.h>
#include "main.h"
/**
 * print_sign - prints the sign of a letter
 * @n: a character to be checked on
 * Return: 1,0 0r -1 and print their sign
 */
int print_sing(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
