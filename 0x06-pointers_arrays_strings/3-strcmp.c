#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return: s1 - s2
 */
int _strcmp(char *s1, char *s2)
{
	while ((s1 != '\0' && s2 != '\0') && s1 == s2)
	{
		s1++;
		s2++;
	}

	if (s1 == s2)
		return (0);
	else
		return (s1 - s2);
}
