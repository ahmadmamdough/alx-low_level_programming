#include "main.h"
/**
 * _strlen_recursion - implementaion
 * @s: the first char of the string to return it's lenght
 * Return: the number of chars
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
