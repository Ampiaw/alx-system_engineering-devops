/**
 * print_alphabet - function that prints the lowercase alphabets
 */
#include "main.h"
void print_alphabet(void)
/* This is a prototype*/
{
	char a_l = 'a';

	while (a_l <= 'z')
	{
		_putchar(a_l);
		a_l++;
	}
	_putchar('\n');
}
