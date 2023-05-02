#include "main.h"
#include <stdio.h>

/**
 *  a function that prints n elements of an array of integers, followed by a new line.
 * a is the input array.
 * n is the input n elements
 * no return.
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
