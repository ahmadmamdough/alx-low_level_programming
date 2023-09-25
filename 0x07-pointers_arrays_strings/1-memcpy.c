#include "main.h"
/**
 * _memcpy - something like the stdlib memset
 *
 * @dest: the buffer to set it's bytes
 * @src: the value to fill the buffer with
 * @n: the number of bytes to fill
 *
 * Return: the buffer after changing it
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(i + dest) = *(i + src);

	return (dest);
}
