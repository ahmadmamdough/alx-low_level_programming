#include "main.h"
/**
 * print_diagonal - implementaion
 *
 * Description: 'prints diagonal line'
 * @n: the length and width of the line
 * Return: always void ()
 */
void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		if (n > 1)
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
