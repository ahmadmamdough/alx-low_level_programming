#include "main.h"
/**
 * rot13 - encryption
 * @s: the string to encrypt
 * Return: the encrypted string
 */
char *rot13(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = (s[i] - 'a' + 13) % 26 + 'a';
			i++;
			continue;
		}
		i++;
	}
	return (s);
}
