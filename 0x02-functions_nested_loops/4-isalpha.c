#include "main.h"
/**
 * _isalpha - function implementaion
 * @c: the letter to be checked
 * Description: 'check for letter case'
 *
 * Return: 1 if it's a letter else return 0
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
