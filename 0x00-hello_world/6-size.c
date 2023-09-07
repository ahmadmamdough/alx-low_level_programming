#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'shows yous how big various data typs on your machine'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %ld %s",sizeof(char), "byte(s)\n");
	printf("Size of a int: %ld %s",sizeof(int), "byte(s)\n");
	printf("Size of a long int: %ld %s",sizeof(long int), "byte(s)\n");
	printf("Size of a long long int: %ld %s",sizeof(long long int), "byte(s)\n");
	printf("Size of a float: %ld %s",sizeof(float), "byte(s)\n");
	return (0);
}
