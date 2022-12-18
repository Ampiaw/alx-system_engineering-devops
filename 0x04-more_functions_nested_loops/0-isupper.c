#include "main.h"
/**
 * _isupper - checks if alphabets are in upper case
 * @c: character inputed
 * Return: Always 1 if in uppercase, 0 in other cases
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
