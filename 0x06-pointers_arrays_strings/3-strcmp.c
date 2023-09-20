#include "main.h"
/**
 * _strcmp - implmentation
 * @s1: the first string
 * @s2: the second string
 * Return: 0 if equal positive if s1 is bigger negative other wise
 */
int _strcmp(char *s1, char *s2)
{

	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
