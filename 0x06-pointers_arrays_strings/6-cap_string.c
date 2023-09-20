#include "main.h"
/**
 * cap_string - implemts capitallization
 * @s: the desired string
 * Return: capitalized string
 */
char *cap_string(char *s)
{
	int i = 0;
	char l = ' ';

		while (s[i])
		{
			if (l == ' ' ||
			l == ',' || l == ';' ||
			l == '.' || l == '!' ||
			l == '"' || l == '(' ||
			l == ')' || l == '{' ||
			l == '{' || l == '?' ||
			l == '\t' || l == '\n')
		{
				if (s[i] >= 'a' && s[i] <= 'z')
					s -= 32;
		}
		l = s[i];
		i++;
	}
	return (s);
}
