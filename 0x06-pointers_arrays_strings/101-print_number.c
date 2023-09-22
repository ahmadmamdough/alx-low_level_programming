#include "main.h"
#include <math.h>
/**
 * print_number - prints number using _putchar
 *
 * @n: the int number
 *
 * Return: always void
 */
void print_number(int n)
{
	int i = log10(n);

	if (n < 0)
	{
		n *= -1;
		_putchar("-");
	}
	while (i >= 0)
	{
		_putchar((int) (n / pow(10, i)) % 10 + '0');
		i--;
	}
}
