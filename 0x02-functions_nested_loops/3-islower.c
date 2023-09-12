#include "main.h"
/**
 * _islower - function implementaion
 * @c: the letter to be checked
 * Description: 'check for letter case'
 *
 * Return: 1 if letter is lowercase else return 0
 */
int _islower(int c)
{
	if (c > 'a' && c < 'z')
		return (1);
	else
		return (0);
}
