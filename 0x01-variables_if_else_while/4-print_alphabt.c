#include <stdio.h>

/**
 * main - prints alphabets in lowerxase except e and q
 *
 * Rerturn: Always (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
			putchar(c);
	}
	putchar('\n');
	return (0);
}
