#include <stdio.h>

/**
 * main - to prints alpabets in all lowercase and uppercase
 * Return: Always 0
 */

int main(void)
{
	char a;
	char z;
	char A;
	char Z;

	z = 122;
	Z = 90;

	for (a = 97; a <= z; a++)
	{
		putchar(a);
	}

	for (A = 65; A <= Z; A++)
	{
		putchar(A);
	}
	putchar('\n');

	return (0);
}
