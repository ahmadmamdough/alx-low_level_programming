#include <stdlib.h>
#include "main.h"

/**
 * concat - entry point
 * @s1: first string
 * @s2: second string
 * Return: pointer to the buffer
 */
char *concat(char *s1, char *s2)
{
	int size1 = 0;
	int size2 = 0;
	char *buffer = NULL;
	int i;

	if (s1 != NULL)
		while (*(size1 + s1) != '\0')
			size1++;

	if (s2 != NULL)
		while (*(size2 + s2) != '\0')
			size2++;

	buffer = malloc((size1 + size2 + 1) * sizeof(char));

	if (buffer == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		buffer[i] = s1[i];

	for (i = 0; i < size2; i++)
		buffer[size1 + i] = s2[i];

	buffer[size1 + size2] = '\0';

	return (buffer);

}
