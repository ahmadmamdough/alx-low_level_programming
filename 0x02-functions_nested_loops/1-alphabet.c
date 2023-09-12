#include "main.h"
/**
 * main - Entry point
 *
 * Description: 'function implementaion of print_alphaber'
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int i;

	for (i = 0; i < 26; i++)
		_putchar('a' + i);
	_putchar('\n');
}
