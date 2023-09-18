#include "main.h"
/**
 * _puts - implementaion
 * @s: the first char of the string
 * Return: always void
 */

void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
