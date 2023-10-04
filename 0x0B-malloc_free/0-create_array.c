#include <stdlib.h>
#include "main.h"
/**
 * create_array - entry point
 * @size: the size of the array
 * @c: the char to intialize the array with
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *buffer;
	size_t i;

	if (size == 0)
		return (NULL);

	buffer = malloc(size * sizeof(char));

	if (buffer == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
		*(buffer + i) = c;

	return (buffer);
}
