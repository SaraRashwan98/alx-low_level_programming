#include <stdio.h>

/**
 * main - Prints in numbers in hexa
 *
 *
 * Return: Always (Success)
 */
int main(void)
{
	int i, j;

	for (i = '0'; i <= '9'; i++)
		putchar(i);

	for (j = 'a'; j <= 'f'; j++)
		putchar(j);

	putchar('\n');

	return (0);
}
