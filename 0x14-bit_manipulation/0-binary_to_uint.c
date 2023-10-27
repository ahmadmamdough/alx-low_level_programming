#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - entry
 * @b: the string of bits
 * Return: decimal value
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0, i = 0, p = 1;
	int len = 0;

	if (!b)
		return (0);

	while (b[i] != '\0')
		len++, i++;
	
	i = 0;
	len--;
	while (i <= len)
	{
		if (b[len - i] == '1')
		{
			res += p;
		}
		else if (b[i] != '0' && b[i] != '1')
			return (0);
		p *= 2;
		i++;
	}
	return (res);
}

