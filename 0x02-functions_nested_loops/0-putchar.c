#include "_putchar.c" 

int main(void)
{
	char str[] = "_putchar\n";
	int i = 0;

	for (int i = 0; i < 9; i++)
	{
		_putchar(str[i]);
	}

	return (0);
}
