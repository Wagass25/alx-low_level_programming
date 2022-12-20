#include <limits.h>
#include "main.h"
/**
 * main - check the codes for Holberton school sstudents
 * Return: Always 0
 */

int main(void)
{
int r;

r = print_times_table(2);

if (r < 0)
r *= -1;
_putchar(r + '0');
_putchar('\n');
return (0);							
}
