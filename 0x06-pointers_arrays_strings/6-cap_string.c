#include "main.h"

/**
 * cap_string - Capitalizes all words in a string.
 * @s1: Pointer to the input string.
 *
 * Description: Capitalizes the first letter of each word in the string.
 * Delimiters for words are: space, tab, newline, comma, semicolon, dot,
 * exclamation mark, question mark, double quotes, opening parenthesis,
 * closing parenthesis, opening brace, and closing brace.
 *
 * Return: Pointer to the modified string.
 */
char *cap_string(char *s1)
{
	char delimiters[] = " \t\n,;.!?\"(){}";
	int i, j;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (i == 0 || (s1[i - 1] >= '0' && s1[i - 1] <= '9'))
		{
			for (j = 0; delimiters[j] != '\0'; j++)
			{
				if (s1[i] == delimiters[j])
				{
					break;
				}
			}
			if (delimiters[j] != '\0')
			{
				continue;
			}
			if (s1[i] >= 'a' && s1[i] <= 'z')
			{
				s1[i] -= 32;
			}
		}
	}
	return (s1);
}
