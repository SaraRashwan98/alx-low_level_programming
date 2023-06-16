#include <stdio.h>

/**
 * main - Prints numbers by using putchar
 *
 * Return: Always (Success)
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{	
		putchar(i);
	}
	
	putchar('\n');
	
	return (0);
}
