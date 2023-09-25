#include "main.h"
/**
 * _strpbrk - implementation of the stdlib strspn
 * @s: the string to check it's prefix
 * @ac: the bytes of the second string
 * Return: number of bytes
 */
char *_strpbrk(char *s, char *ac)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; ac[j] != '\0'; j++)
		{
			if (ac[j] == s[i])
			{
				return (s + i);
			}
		}
	}
	return (0);
}
