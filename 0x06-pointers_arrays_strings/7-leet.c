#include "main.h"
/**
 * leet - leets
 * @s: the string to leet
 * Return: the leeted string
 */
char *leet(char *s)
{
	int i = 0;
	int j;
	char m[] = "olOeaEAt";

	while (s[i])
	{
		for (j = 0; j < 8; j++)
		{
			if (s[i] == m[j] || s[i] + 32 == m[j])
				s[i] = '0' + j;
		}

		i++;
	}
	return (s);
}
