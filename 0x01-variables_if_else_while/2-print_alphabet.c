/**
 * main -  a program that prints the alphabet in lowercase
 *
 * Return: 0
 */
#include <stdio.h>
int main(void)
{
	char alfbet = "a";

	while (alfbet <= "z")
	{
		putchar(alfbet);
		alfbet++;
	}
	putchar("\n");
	return (0);
}
