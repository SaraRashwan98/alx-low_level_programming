#iclude "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: string we're looking for
 * @accept: string to be checked
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept, or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}

	return (NULL);
}
