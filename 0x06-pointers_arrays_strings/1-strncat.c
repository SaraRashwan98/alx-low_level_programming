#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: 1st string
 * @src: 2nd string
 * @n: bytes from src
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (*dest[i] != '\0')
	{
		i++;
	}

	while (*src[j] != '\0' && i < 97 && j < n)
	{
		*dest[i] = *src[j];
		i++;
		j++;
	}

	*dest[i] = '\0';
	return *dest;
}
