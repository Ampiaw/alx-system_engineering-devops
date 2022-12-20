#include "main.h"
/**
 * _strlen - to return the length of string
 * @s: character
 * Return: 0
 */

int _strlen(char *s)
{
	int counter = 0; /*starting counter from zero*/

	for (; *s++;)
		counter++;
	return (counter);
}
