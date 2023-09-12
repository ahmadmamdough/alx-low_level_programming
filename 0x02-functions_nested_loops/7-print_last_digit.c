#include "main.h"
/**
 * print_last_digit - function implementaion
 * @n: the desired number to calculate it's last digit
 * Description: 'print the last digit of n
 *
 * Return: the last digit of n
 */
int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;

	int x = n % 10;

	_putchar('0' + x);

	return (x);
}
