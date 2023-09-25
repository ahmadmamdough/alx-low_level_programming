#include "main.h"
/**
 * _strstr - implementaion
 * @hs: the haystack
 * @n: the needle
 * Return: the first occurance of the needle
 */
char *_strstr(char *hs, char *n)
{
	int i;
	int j;

	for (i = 0; hs[i] != '\0'; i++)
	{
		for (j = 0; n[j] != '\0'; j++)
		{
			if (n[j] != hs[i + j])
				break;
		}
		if (n[j] == '\0')
			return (hs + i);
	}
	return (0);
}
