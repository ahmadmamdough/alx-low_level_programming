#include "main.h"
/**
 * _abs- function implementaion
 * @n: the number to be calculated
 * Description: 'calc absloute value'
 *
 * Return: the absloute value of n
 */
int _abs(int n)
{
	if (n < 0)
		return (-1 * n);
	else
		return (n);
}
