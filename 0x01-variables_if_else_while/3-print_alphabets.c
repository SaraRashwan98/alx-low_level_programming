#include <stdio.h>

/**
 * main - Prints alphabet in lowercase then in uppercase
 *
 * Return: Always (Success)
 */
int main(void)
{
	char c, x;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	for (x = 'A'; x <= 'Z'; x++)
		putchar(x);

	putchar('\n');
	return (0);
}
