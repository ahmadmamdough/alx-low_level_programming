#include <stdlib.h>
#include "main.h"
/**
 * array_range - entry point
 * @min: min
 * @max: max
 * Return: the buffer
 */
int *array_range(int min, int max)
{
	int size;
	int *arr = NULL;
	int i;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(size * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
