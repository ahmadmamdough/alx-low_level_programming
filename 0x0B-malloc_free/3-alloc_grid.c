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
	int **buffer;
	int i;
	int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	buffer = malloc(height * sizeof(int *));

	if (buffer == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		buffer[i] = malloc(width * sizeof(int));

		if (buffer[i] == NULL)
		{
			for (j = i - 1; j >= 0; j--)
			{
				free(buffer[j]);
			}
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			buffer[i][j] = 0;
	}
	return (buffer);
}
