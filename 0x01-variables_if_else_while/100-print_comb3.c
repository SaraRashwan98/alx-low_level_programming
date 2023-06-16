#include <stdio.h>

/**
 * main - Prints all possible different combinations of two digits
 *
 * Return: Always (Success)
 */
int main(void)
{
	int i, j;

	for (i = '0'; i < '9'; i++)
	{
		for (j = '1'; j <= '9'; j++)
		{
			if (i < j)
			{
				putchar(i);
				putchar(j);
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
