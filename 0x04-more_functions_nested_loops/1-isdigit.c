#include "main.h"
/**
 * _isdigit - function that checks for a digit
 * @c: digit inputed
 * Return: Always 1 when its digit but 0 when otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
