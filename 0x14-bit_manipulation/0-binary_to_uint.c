#include "main.h"

/**
 * binary_to_uint - entry
 * @b: the string of bits
 * Return: decimal value
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0, i = 0, p = 1;

	while (b[i])
	{
		if (b[i] == '1')
		{
			res += p;
		}
		p *= 2;
		i++;
	}
	return (res);
}

