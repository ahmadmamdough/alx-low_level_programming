#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - entry point
 * @b: size
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *buffer;

	buffer = malloc(b);

	if (buffer == NULL)
		exit(98);

	return (buffer);
}
