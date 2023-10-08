#include <stdlib.h>
#include "main.h"

/**
 * _calloc - enrty point
 * @n: number
 * @size: size of number
 * Return: buffer
 */
void *_calloc(unsigned int n, unsigned int size)
{
	char *buffer;
	unsigned int i = 0;

	if (n == 0 || size == 0)
		return (NULL);

	buffer = malloc(size * n);

	if (buffer == NULL)
		return (buffer);

	for (i = 0; i < n; i++)
	{
		buffer[i] = 0;
	}

	return (buffer);
}
