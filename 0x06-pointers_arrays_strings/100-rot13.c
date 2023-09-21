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
	char bf[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char af[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[i])
	{
		if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
		{
			for (j = 0; j < 52; j++)
			{
				if (s[i] == bf[j])
					s[j] = af[j];
			}
		}
		i++;
	}
	return (s);
}
