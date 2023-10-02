#include <stdio.h>
/**
 * main - entry point
 * @argc:  number of command line argument
 * @argv:  array containing command line
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - argc]);

	return (0);
}
