#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc:  number of command line argument
 * @argv:  array containing command line
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int result = 0;
	int tmp;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	tmp = atoi(argv[1]);

	if (tmp < 0)
	{
		printf("0\n");
		return (0);
	}
	result += tmp / 25;
	tmp %= 25;

	result += tmp / 10;
	tmp %= 10;

	result += tmp / 5;
	tmp %= 5;

	result += tmp / 2;
	tmp %= 2;

	result += tmp;

	printf("%d\n", result);


	return (0);
}
