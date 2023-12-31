#include "main.h"
/**
 * _strncpy - implementaion
 * @dest: the buffer
 * @src: the string to copy from;
 * @n: maximum number of chars
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
