/**
 * main - function that prints the lowercase alphabets
 *
 * return: 0
 */
#include "main.h"
void print_alphabet(void)
{
	char a_l = 'a';

	while (a_l <= 'z')
	{
		_putchar(a_l);
		a_l++;
	}
	_putchar('\n');
}
