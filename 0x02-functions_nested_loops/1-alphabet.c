#include "main.h"

/**
 * main - prints alphabet
 *
 * Return: void
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
			_putchar(c);
	}
	_putchar('\n');
}
