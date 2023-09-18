#include "main.h"
/**
 * puts_half - print half of string
 * @s: the first char of the string
 * Return: always void
 */

void puts_half(char *s)
{
	int size = 0;
	int i;

	while (*(s + size) != '\0')
		size++;

	if (size % 2 == 1)
		s++;

	size /= 2;

	s += size;

	for (i = 0; i < size; i++)
		_putchar(*(s + i));

}
