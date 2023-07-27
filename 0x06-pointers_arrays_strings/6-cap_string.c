#include "main.h"

/**
 * cap_string - Capitalizes all words in a string.
 * @str: Pointer to the input string.
 *
 * Description: Capitalizes the first letter of each word in the string.
 * Delimiters for words are: space, tab, newline, comma, semicolon, dot,
 * exclamation mark, question mark, double quotes, opening parenthesis,
 * closing parenthesis, opening brace, and closing brace.
 *
 * Return: Pointer to the modified string.
 */
char *cap_string(char *str)
{
	int index = 0;

	while (str[index])
	{
		while (!(str[index] >= 'a' && str[index] <= 'z'))
			index++;

		if (str[index - 1] == ' ' ||
		    str[index - 1] == '\t' ||
		    str[index - 1] == '\n' ||
		    str[index - 1] == ',' ||
		    str[index - 1] == ';' ||
		    str[index - 1] == '.' ||
		    str[index - 1] == '!' ||
		    str[index - 1] == '?' ||
		    str[index - 1] == '"' ||
		    str[index - 1] == '(' ||
		    str[index - 1] == ')' ||
		    str[index - 1] == '{' ||
		    str[index - 1] == '}' ||
		    index == 0)
			str[index] -= 32;

		index++;
	}

	return (str);
}
