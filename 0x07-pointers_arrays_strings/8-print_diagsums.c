#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - implementaion
 * @a: array of arrays
 * @size: size of a
 */
void print_diagsums(int *a, int size)
{
	int right = 0;
	int left = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		right += *(a + size * i + size - 1 - i);
		left += *(a + size * i + i);
	}

	printf("%d, %d\n", left, right);

}
