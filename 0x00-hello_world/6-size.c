#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long int ll;
	float f;

	printf(stderr, "Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf(stderr, "Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf(stderr, "size of a long int: %lu byte(s)\n", (unsigned long)sizeof(l));
	printf(stderr, "Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(ll));
	printf(stderr, "Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));

	return (0);
}
