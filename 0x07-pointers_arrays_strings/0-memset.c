#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: pointer to memory
 * @b: const byte
 * @n: the num of bytes to fill
 *
 * ReturnL pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
