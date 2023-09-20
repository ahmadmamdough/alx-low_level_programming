#include "main.h"
/**
 * string_toupper - makes all lower case upper case
 * @s: the string to change
 * Return: the result string
 */
char *string_toupper(char *s)
{
	char *c = s;

	while (*c)
	{
		if (*c >= 'a' && *c <= 'z')
			*c += 32;
		c++;
	}

	return (s);
}
