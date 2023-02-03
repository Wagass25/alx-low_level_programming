#include <stdio.h>
#include <stdlib.h>

/**
 * get_bit - returns the value of a bit at a given index
 * @n: int to get bit from
 * @index: index to pull data from
 * Return: the value of a bit at index or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	if (n != 0)
		return ((n & (1 << index)) >> index);
	else
		return (-1);
}
