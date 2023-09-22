#include "main.h"
/**
 * print_number - prints number using _putchar
 *
 * @n: the int number
 *
 * Return: always void
 */
void print_number(int n)
{
	char x[20];
	int i = 0;
	int sign = 1;

	if (n < 0)
		sign = 0;

	while (n)
	{
		x[i] = n % 10 + '0';
		n /= 10;
		i++;
	}

	if (!sign)
	{
		x[i] = '-';
		i++;
	}

	i--;

	while (i >= 0)
		_putchar(x[i--]);
}
