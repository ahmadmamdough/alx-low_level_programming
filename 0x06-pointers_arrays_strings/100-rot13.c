#include "main.h"
/**
 * rot13 - encryption
 * @s: the string to encrypt
 * Return: the encrypted string
 */
char *rot13(char *s)
{
	int i = 0;
	int j;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' || s[i] <= 'Z')
		{
			for (j = 0; j < 13; j++)
			{
				s[i]++;
				if (s[i] > 'Z' && s[i] < 'a' || s[i] > 'z')
					s[i] -= 26;
			}
		}
		i++;
	}
	return (s);
}
