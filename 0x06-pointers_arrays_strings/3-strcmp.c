#include "main.h"
/**
 * _strcmp - implmentation
 * @s1: the first string
 * @s2: the second string
 * Return: 0 if equal positive if s1 is bigger negative other wise
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			continue;
		else
			return (s1[i] - s2[i]);

		i++;
	}

	return (s1[i] - s2[i]);
}
