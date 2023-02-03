#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - Entry point
 * @b: points towards a string of 0 and 1 chars
 * Return: converted number, or 0 if numbers aren't 0 or 1/b is null
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int total, i;

	if (b == NULL)
		return (0);
	total = 0;
	for (i = 0; *(b + i); i++)
	{
		total = total << 1;
		if (*(b + i) == '1')
			total = total | 1;
		else if (*(b + i) != '0')
			return (0);
	}
	return (total);
}
