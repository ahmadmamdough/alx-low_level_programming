#include "main.h"
/**
 * _atoi - implementaion
 * @s: the string
 * Return: int the result
 */
int _atoi(char *s)
{
	int res = 0;
	int sign = 1;

	while (*s != '\0')
	{
		if (*s >= '0' && *s <= '9')
		{
			res *= 10;
			res += *s - '0';
		}
		else
		{
			if (res > 0)
				break;
			else if (*s == '-')
				sign *= -1;
		}
		s++;
	}
	return (sign * res);
}
