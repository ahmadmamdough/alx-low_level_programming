#include "main.h"
/**
 * len - implementaion
 * @s: the first char of the string
 * Return: the last char in the string
 */
char *len(char *s)
{
	if (*s == '\0')
		return (s - 1);
	return (len(s + 1));
}
/**
 * palindrome - implementaion
 * @l: the left char
 * @r: the right char
 * Return: 1 if true 0 otherwise
 */
int palindrome(char *l, char *r)
{
	if (l >= r)
		return (1);
	if (*l != *r)
		return (0);

	return (palindrome(l + 1, r - 1));
}
/**
 * is_palindrome - implementaion
 * @s: the first char in the string
 * Return: 1 if true 0 otherwise
 */
int is_palindrome(char *s)
{
	char *c = len(s);

	return (palindrome(s, c));
}
