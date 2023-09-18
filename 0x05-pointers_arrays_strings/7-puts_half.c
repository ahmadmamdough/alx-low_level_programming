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

	if (size % 2 == 0)
		size /= 2;
	else
		size = (size - 1) / 2;

	for (i = 0; i < size; i++)
		_putchar(*(s + i));

}
