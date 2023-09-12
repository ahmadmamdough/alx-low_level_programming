#include "main.h"
/**
 * print_sign - function implementaion
 * @n: the number to be checked
 * Description: 'check for letter case'
 *
 * Return: 1 if it's positvie 0 if it's 0 -1 if it's negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
