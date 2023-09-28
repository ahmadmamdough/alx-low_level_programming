#include "main.h"

int x(int n, int y)
{
	if (y * y > n)
		return (-1);
	if (y * y == n)
		return (y);

	return (x, y + 1);
}

/**
 * _sqrt_recursion - sqrt implementaion
 * @n: the number to calculate it's sqrt
 * Return: sqrt of n
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (x(n, 0));
}
