#include "main.h"
/**
 * _isupper - implementaion
 * Description: 'check if a number is upper case'
 * @c: the value to be checked
 * Return: 1 if upper 0 else
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
