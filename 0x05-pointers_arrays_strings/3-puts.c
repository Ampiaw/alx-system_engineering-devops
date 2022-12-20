#include "main.h"
/**
 * _puts - print a string
 * @str: strings to be printed
 * Return: length of string
 */

void _puts(char *str)
{
	int c = 0; /*where c is counter starting from zero*/

	while (str[c] != '\0')
	{
		_putchar(str[c]);
		c++;
	}
	_putchar('\n');
}
