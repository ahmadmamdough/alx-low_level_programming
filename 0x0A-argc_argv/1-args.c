#include <stdio.h>
/**
 * main - entry point
 * @argc:  number of command line argument
 * @argv:  array containing command line
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void) argv;
	return (0);
}
