#include "main.h"
/**
 * _strlen - implementaion
 * @s: the pointer to the first string
 * Return: length of the string
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
