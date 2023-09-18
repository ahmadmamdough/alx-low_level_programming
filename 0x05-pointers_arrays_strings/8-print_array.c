#include <stdio.h>
#include "main.h"
/**
 * print_array - print n elements of array
 * @a: the first element of the array
 * @n: number of elements to be printed
 * Return: always void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d", *(a + i));
			break;
		}
		printf("%d, ", *(a + i));
	}
	printf("\n");
}
