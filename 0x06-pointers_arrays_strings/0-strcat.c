#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatenate a string
 * @dest: string to attach another string
 * @src: string to concatenate to string one(dest)
 * Return: the final string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int x = 0;

	while (dest[i] != '\0')
	{
		i++;
		{
			while (src[x] != '\0')
			{
				x++;
			}
		}
	}
	_strcat(dest, src);
	return (dest);
}
