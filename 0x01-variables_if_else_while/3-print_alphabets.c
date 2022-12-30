#include <stdio.h>
/**
 * main - to print alpabets in both lowercase and uppercase
 *
 * return: always 0
 */

int main(void)
{
	char a;
	char z;
	char A;
	char Z;

	z = 122;
	Z = 90;

	for (a = 97; a <= 122; a++)
	{
		putchar("%c", a);
	}
	for (A = 65; A <= 90; A++);
	{
		putchar("%c", A);
	}
	putchar("\n");
	return (0);
}
