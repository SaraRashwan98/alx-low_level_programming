#include "main.h"

/**
 * reverse_array -  reverses the content of an array of integers.
 * @a: an array of integers
 * @n: the size of array
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int begin, end, tmp;

	begin = 0;
	end = n - 1;
	while (begin < end)
	{
		tmp = begin[a];
		begin[a] = end[a];
		end[a] = tmp;

		begin++;
		end--;
	}
}
