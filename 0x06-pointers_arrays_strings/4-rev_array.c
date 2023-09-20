#include "main.h"
/**
 * reverse_array - reverse the array of ints
 * @a: the first element in the array;
 * @n: the number of elements
 */
void reverse_array(int *a, int n);
{
	int i;

	for (i = 0; i < n / 2; i++)
	{
		int tmp = a[i];

		a[i] = a[n - 1 - i];
		a[n - 1 - i] - tmp;
	}
}
