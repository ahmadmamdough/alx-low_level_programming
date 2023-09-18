#include "main.h"
/**
 * rev_string - revers a string
 * @s: the first char of the string
 * Return: always void
 */

void rev_string(char *s)
{
	int i = 0;
	char *r;

	while (*(s + i) != '\0')
		i++;
	i--;
	c = s + i;

	while (s < c)
	{
		char tmp = *c;
		*c = *s;
		*s = tmp;
		c--;
		s++;
	}
}
