#include "main.h"
/**
 * print_line - implementaion
 *
 * Description: 'prints a line'
 * @n: the length of the line;
 * Return: always void ()
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
