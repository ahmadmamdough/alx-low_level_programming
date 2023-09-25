#include <stdio.h>
#include "main.h"
/**
 * _strchr - locates a char in a string
 *
 * @s: the string to check
 * @c: the char to look for
 *
 * Return: pointer to char if found NULL otherwise
 */
char *_strchr(char *s, char c)
{
	char *i;

	for (i = s; *i != '\0'; i++)
	{
		if (*i == c)
			return (i);
	}
	return (NULL);
}
