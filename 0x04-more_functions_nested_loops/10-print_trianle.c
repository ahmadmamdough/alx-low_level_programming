#include "main.h"

/**
 * print_triangle - implementaion
 * Description: 'this prints a triangle of hashes
 * @size: the height of the triangle;
 * Return: always void
 */

void print_triangle(int size)
{
	int i, s, hash;

	for (i = 1; i <= size; i++)
	{

		for (s = 0; s < size - i; s++)
			_putchar(' ');

		for (hash = 0; hash < i; hash++)
			_putchar('#');

		_putchar('\n');
	}

	if (size <= 0)
		_putchar('\n');
}
