#include <stdlib.h>
#include "main.h"
/**
 * _strdup - entry point
 * @s: the char to intialize the array with
 * Return: pointer to the array
 */
char *_strdup(char *s)
{
	char *buffer;
	size_t i = 0;
	int size;

	if (s == NULL)
		return (NULL);

	while (*(s + i) != '\0')
		i++;

	buffer = malloc(i  sizeof(char));

	if (buffer == NULL)
	{
		return (NULL);
	}

	for (; i >= 0; i--)
		*(buffer + i) = *(s + i);

	return (buffer);
}
