#include "main.h"
/**
 * _strncat - implementaion _strncat alx
 * @dest: the string to concatinate to
 * @src: the string to concatinate from
 * @n: the maximum number of chars to copy
 * Return: the result string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *i = dest;
	int j = 0;

	while (*i != '\0')
		i++;
	if (n > 0)
		*i++ = *src++;
	j++;

	while (*src != '\0' && j < n)
	{
		*(i++) = *(src++);
		j++;
	}
	*i = '\0';

	return (dest);
}
