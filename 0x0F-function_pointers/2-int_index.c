#include <stdlib.h>
/**
 * int_index - entry point
 * @array: the array to search
 * @size: the size to check
 * @cmp: the comparison function
 * Return: the index of the first element or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if ((*cmp) (array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
