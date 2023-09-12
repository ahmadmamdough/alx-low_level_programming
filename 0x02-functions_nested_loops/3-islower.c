#include "main.h"
/*
 * islower - Entry point
 *
 * Description: 'check for letter case'
 *
 * Return: Always 0 (Success)
 */
int islower(int c)
{
	if (c > 'a' && c < 'z')
		return (1);
	else 
		return (0);
}
