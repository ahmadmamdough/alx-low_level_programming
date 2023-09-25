#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - implementaion
 * @a: array of arrays
 * @size: size of a
 */
void print_diagsums(int *a, int size)
{
	int rigt = 0;
	int left = 0;

	for (int i = 0; i < size(); i++)
	{
		right += a[i][size - 1 - i];
		left += a[i][i];
	}

	printf("%d, %d\n", left, right);

}
