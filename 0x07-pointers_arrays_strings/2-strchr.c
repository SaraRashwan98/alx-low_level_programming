#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: the string to be checked
 * @c: the character we want to find
 *
 * Return: pointer to the first occurrence of c or null if it's not found
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
