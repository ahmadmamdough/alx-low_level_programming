#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - entry point
 * @s1: first string
 * @s2: second string
 * @n: size
 * Return: pointer to the buffer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1 = 0;
	unsigned int size2 = 0;
	char *buffer = NULL;
	unsigned int i;

	if (s1 != NULL)
		while (*(size1 + s1) != '\0')
			size1++;

	if (s2 != NULL)
		while (*(size2 + s2) != '\0')
			size2++;
	if (n > size2)
		n = size2;

	buffer = malloc((size1 + n + 1) * sizeof(char));

	if (buffer == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		buffer[i] = s1[i];

	for (i = 0; i < n; i++)
		buffer[size1 + i] = s2[i];

	buffer[size1 + n] = '\0';

	return (buffer);

}
