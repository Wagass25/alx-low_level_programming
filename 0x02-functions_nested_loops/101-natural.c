#include <stdio.h>
#include <stdlib.h>

/**
 *main - computes and prints the sum of all the multiples of 3 or 5 below 1024
 *
 *Return: 0
 */

int main(void)
{
int a = 0;
int sum = 0;

while (a < 1024)
{
if (a % 3 == 0 || a % 5 == 0)
{
sum += a;
}
a++;
}
printf("%i\n", sum);
return (0);
}
