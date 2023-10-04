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
	int i = 0;

	if (s == NULL)
		return (NULL);

	while (*(s + i) != '\0')
		i++;

	buffer = malloc((i + 1) *  sizeof(char));

	if (buffer == NULL)
	{
		return (NULL);
	}

	for (; i >= 0; i--)
		*(buffer + i) = *(s + i);

	return (buffer);
}
