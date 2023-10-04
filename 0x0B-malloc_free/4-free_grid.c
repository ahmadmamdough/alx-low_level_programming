#include <stdlib.h>
#include "main.h"
/**
 * free_grid - entry point
 * @buffer: buffer
 * @height: height
 */

void free_grid(int **buffer, int height)
{
	int j;

	for (j = 0; j < height; j++)
		free(buffer[j]);
	free(buffer);
}
