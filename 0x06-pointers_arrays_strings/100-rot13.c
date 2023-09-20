#include "main.h"

/**
 * rot13 - Encodes a string using ROT13 cipher.
 * @str: The string to encode.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *str)
{
char *input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char *output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

int i, j;
int found = 0;

for (i = 0; str[i] != '\0'; i++)
{
	for (j = 0; input[j] != '\0'; j++)
	{
		if (str[i] == input[j])
		{
			str[i] = output[j];
			found = 1;/* Mark as found*/
			break;/* Stop checking when a match is found*/
		}
	}

	if (!found)
	{
		str[i] = str[i];
	}
}

return (str);
}
