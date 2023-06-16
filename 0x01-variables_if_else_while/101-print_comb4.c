#include <stdio.h>

/**
 * main - Prints all possible different combinations of three digits
 *
 * Return: Always (Success)
 */
int main(void)
{
	int i, j, z;

	for (i = '0'; i <= '7'; i++)
	{
		for (j = '1'; j <= '8'; j++)
		{
			for (z = '2'; z <= '9'; z++)
			{
				if ((i < j) && (j < z) && (i != j) && (j != z) && (i != z))
				{
					putchar(i);
					putchar(j);
					putchar(z);
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
