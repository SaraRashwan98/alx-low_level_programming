#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 * Return: Returns 1 if c is lowercase and 0 otherwise
 */
int _islower(int c)
{
	int i;
	if (i >= 97 && i <= 122)
		return (1);
	else
		return (0);
}
