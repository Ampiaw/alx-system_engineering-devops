#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: the number
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int A = n % 10;

	if (A < 0)
		A *= -1;
	_putchar(A + '0');

	return (0);
}
