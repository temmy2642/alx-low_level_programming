#include "main.h"
#include <ctype.h>

/**
* cap_string - Capitalizes all words of a string.
* @s: The input string.
*
* Return: A pointer to the modified string.
*/
char *cap_string(char *s)
{
	int i;

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] = toupper(s[0]);

	for (i = 1; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (s[i-1] == ' ' || s[i-1] == '\t' || s[i-1] == '\n' ||
					s[i-1] == ',' || s[i-1] == ';' || s[i-1] == '.' ||
					s[i-1] == '!' || s[i-1] == '?' || s[i-1] == '"' ||
					s[i-1] == '(' || s[i-1] == ')' || s[i-1] == '{' ||
					s[i-1] == '}')
			{
				s[i] = toupper(s[i]);
			}
		}
	}

	return s;
}
