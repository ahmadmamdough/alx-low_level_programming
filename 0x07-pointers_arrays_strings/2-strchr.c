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
	 int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
