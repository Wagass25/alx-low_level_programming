#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always returns 0
 *
 */
int main(void)
{
	int ones = '0';
	int tens = '0';

	for (tens = '0'; tens <= '0'; tens++)
	{
		for (ones = '0'; ones <= '0'; ones++)
		{
			if (!((ones == tens) || (tens > ones)))
			{
				putchar(tens);
				putchar(ones);
				if (!(ones == '0' && tens == '0'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
