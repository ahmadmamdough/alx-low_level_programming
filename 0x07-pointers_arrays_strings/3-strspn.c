#include "main.h"
/**
 * _strspn - implementation of the stdlib strspn
 * @s: the string to check it's prefix
 * @ac: the bytes of the second string
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *ac)
{
	int len = 0;
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; ac[j] != '\0'; i++)
		{
			if (ac[j] == s[i])
			{
				len++;
				break;
			}
		}
		if (ac[j] == '\0')
			break;
	}
	return (len);
}
