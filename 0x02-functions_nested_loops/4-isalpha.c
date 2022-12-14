#include "main.h"
/**
 * _isalpha - hecks for alphabetic character
 * @c: a character to be checked on
 * Return: 1 0r 0 based on conditions
 */

int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
