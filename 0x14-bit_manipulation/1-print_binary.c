#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: number to print
 * Return: number converted to binary
 */

void print_binary(unsigned long int n)
{
	unsigned long int i, first = 0;
	unsigned long int shift, result;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = (sizeof(unsigned long int) * 8); i > 0; i--)
	{
		shift = n >> (i - 1);
		result = shift & 1;
		if (result)
			first = 1;
		if (result == 1 && first == 1)
			_putchar('1');
		else if (first == 1)
			_putchar('0');
	}
}
