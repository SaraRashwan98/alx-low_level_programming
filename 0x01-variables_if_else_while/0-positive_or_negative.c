#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Check n and prints if it's positive or negative or 0
 *
 * Return: Always (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n < 0)
		printf("is negative\n");
	else if (n = 0)
		printf("is zero\n");
	else
		printf("is positive\n");
	return (0);
}
