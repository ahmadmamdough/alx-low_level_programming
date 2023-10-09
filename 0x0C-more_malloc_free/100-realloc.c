#include <stdlib.h>
#include "main.h"
/**
 * _realloc - entry point
 * @p: the old buffer
 * @old_size: the old size
 * @new_size: reallocation size
 * Return: the new buffer
 */
void *_realloc(void *p, unsigned int old_size, unsigned int new_size)
{
	int size = new_size;
	char *buffer = NULL;
	int i;
	char *ptr = p;

	if (p == NULL)
	{
		buffer = malloc(new_size);
		return (buffer);
	}

	if (old_size == new_size)
		return (ptr);

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	buffer = malloc(new_size);

	if (buffer == NULL)
	{
		return (ptr);
	}

	if (old_size < new_size)
		size = old_size;

	for (i = 0; i < size; i++)
		buffer[i] = *(ptr + i);

	return (buffer);

}
