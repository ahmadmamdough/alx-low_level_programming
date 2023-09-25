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
	char *i = s;
	
	while (*i != '\0' && *i != c)
		i++;
	return (i);

}
