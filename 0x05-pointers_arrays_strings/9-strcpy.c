#include "main.h"
/**
 * _strcpy - copies str from src to dest
 * @src: the string to be copied
 * @dest: the desierd location to copy to
 * Return: pointer to the first char of the dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (1)
	{
		*(dest + i) = *(src + i);
		if (*(src + i) == '\0')
		{
			break;
		}
		i++;
	}
	return (dest);
}
