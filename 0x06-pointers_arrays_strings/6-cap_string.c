#include "main.h"

/**
 * cap_string - Capitalizes all words in a string.
 * @str: The string to modify.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
int i = 0;
int capitalize_next = 1;/* Start with the first word capitalized*/

while (str[i] != '\0')
{
	if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
	str[i] == ',' || str[i] == ';' || str[i] == '.' ||
	str[i] == '!' || str[i] == '?' || str[i] == '"' ||
	str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
	{
		capitalize_next = 1;/* Set flag to capitalize the next word*/
	}
	else if (capitalize_next && str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] -= 32;/* Convert lowercase to uppercase*/
		capitalize_next = 0;/* Reset flag*/
	}
	else
	{
		capitalize_next = 0;/* Reset flag*/
	}
	i++;
}

return (str);
}
