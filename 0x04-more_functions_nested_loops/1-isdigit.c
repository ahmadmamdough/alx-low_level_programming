#include "main.h"
/**
 * _isdigit - implementaion
 * Description: 'checks if a number is a digit'
 * @c: the value to be checked
 * Return: always void ()
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
