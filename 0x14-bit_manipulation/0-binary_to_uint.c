#include "main.h"
#include <string.h>

/**
 * binary_to_uint - entry
 * @b: the string of bits
 * Return: decimal value
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0, i = 0, p = 1;
	int len = strlen(b);

	if (b == NULL)
		return (0);

	len--;
	while (b[i])
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

