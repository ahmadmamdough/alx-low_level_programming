#include "main.h"
/**
 * _strcat - concatinate the src to the dest
 * @dest: the first string
 * @src: the second string
 * Return: the bigger string
 */
char *_strcat(char *dest, char *src)
{
	char *i = dest;

	while (*i != '\0')
		i++;

	*i = *src;

	src++;
	i++;

	while (*src != '\0')
	{
		*i++ = *src++;
	}
	*i = '\0';

	return (dest);
}
