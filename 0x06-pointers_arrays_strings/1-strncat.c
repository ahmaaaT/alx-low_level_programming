#include "main.h"

/**
 * _strncat - Concatenates two strings, using at most n bytes from src.
 * @dest: The destination string.
 * @src: The source string to be appended to dest.
 * @n: The maximum number of bytes to be used from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
int dest_len = 0;
int i = 0;

/* Calculate the length of dest*/
while (dest[dest_len] != '\0')
{
	dest_len++;
}
/* Append the src to dest, using at most n bytes*/
while (src[i] != '\0' && i < n)
{
	dest[dest_len] = src[i];
	dest_len++;
	i++;
}

/* Add the terminating null byte*/
dest[dest_len] = '\0';

return (dest);
}
