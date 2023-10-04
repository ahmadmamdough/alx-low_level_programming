#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - entry point
 * @width: width
 * @height: height
 * Return: buffer
 */

int **alloc_grid(int width, int height)
{
	int *buffer;
	int i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	buffer = malloc(height * width * sizeof(int));

	if (buffer == NULL)
		return (NULL);

	for (i = 0; i < width * height; i++)
		*(buffer + i) = 0;

	return (buffer);
}
