#include "main.h"
/**
 * print_alphabet_x10 - Entry poin
 *
 * Description: 'combinations of numbers'
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 26; j++)
			_putchar(j + 'a');
		_putchar('\n');
	}
}
