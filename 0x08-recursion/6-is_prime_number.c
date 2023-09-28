#include "main.h"
/**
 * x - calculates
 * @n: the numebr to check
 * @y: counter
 * Return: 1 if primne 0 otherwise
 */
int x(int n, int y)
{
	if (y == n)
		return (1);
	if (n % y == 0)
		return (0);
	return (x(n, y + 1));

}
/**
 * is_prime_number - implementaion
 * @n: the number to calculate if it's a prime or not
 * Return: 1 if prime 0 else
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (x(n, 2));
}
