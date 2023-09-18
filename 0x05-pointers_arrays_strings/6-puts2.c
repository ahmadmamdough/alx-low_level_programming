#include "main.h"
/**
 * puts2 - idk what i'm supposed to do
 * @s: the first char of the string
 * Return: always void
 */
void puts2(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);

		if (*(s + 1) == '\0')
			break;

		s += 2;
	}
	_putchar('\n');
}
