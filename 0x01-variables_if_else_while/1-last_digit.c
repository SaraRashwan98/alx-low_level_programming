#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Check last digit of number and prints a text according number
 *
 * Return: Always (Success)
 */
int main(void)
{
	int n;
	int digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	digit = n % 10;

	if (digit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, digit);
	else if (digit == 0)
		printf("Last digit of %d is %d and is 0\n", n, digit);
	else if (digit < 6 || digit != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, digit);

	return (0);
}
