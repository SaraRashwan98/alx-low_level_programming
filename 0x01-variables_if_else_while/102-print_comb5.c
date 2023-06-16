#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers
 *
 * Return: Always (Success)
 */
int main(void)
{
	int i, j, z, k;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '8'; j++)
		{
			for (z = '0'; z <= '9'; z++)
			{
				for(k = '0'; k <= '9'; k++)
				{
					if ((i <= z) && (j <= k) && (j <= z) && (j <= i))
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(z);
						putchar(k);
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
