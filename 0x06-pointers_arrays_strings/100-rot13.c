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
	char bf[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char af[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (s[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == bf[j])
				s[i] = af[j];
			break;
		}
		i++;
	}
	return (s);
}
