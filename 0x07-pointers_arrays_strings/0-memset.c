#include "main.h"
/**
 * _memset - something like the stdlib memset
 *
 * @s: the buffer to set it's bytes
 * @b: the value to fill the buffer with
 * @n: the number of bytes to fill
 *
 * Return: the buffer after changing it
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *i;

	for (i = s; i < s + n; i++)
		*i = b;

	return (s);
}
