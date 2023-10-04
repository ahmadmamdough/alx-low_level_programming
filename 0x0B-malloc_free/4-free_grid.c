#include <stdlib.h>
#include "main.h"
/**
 * free_grid - entry point
 * @grid: buffer
 * @height: height
 */

void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
		free(buffer[j]);
	free(buffer);
}
