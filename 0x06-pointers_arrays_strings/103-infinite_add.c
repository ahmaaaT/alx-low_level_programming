#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * reverse_string - Reverses a string in place.
 * @str: The string to reverse.
 */
void reverse_string(char *str)
{
int len = strlen(str);
int i, j;
char temp;

for (i = 0, j = len - 1; i < j; i++, j--)
{
	temp = str[i];
	str[i] = str[j];
	str[j] = temp;
}
}

/**
 * infinite_add - Adds two numbers represented as strings.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: A pointer to the result string or 0 if the result cannot fit in r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1 = strlen(n1);
int len2 = strlen(n2);
int carry = 0;
int result_len = 0;
int digit1, digit2, sum;
memset(r, '\0', size_r);

while (len1 > 0 || len2 > 0)
{
	digit1 = (len1 > 0) ? (n1[len1 - 1] - '0') : 0;
	digit2 = (len2 > 0) ? (n2[len2 - 1] - '0') : 0;
	sum = digit1 + digit2 + carry;

	if (result_len >= size_r - 1)
	{
		return (0);
	}

	r[result_len++] = (sum % 10) + '0';
	carry = sum / 10;

	if (len1 > 0)
		len1--;
	if (len2 > 0)
		len2--;
}

if (carry > 0)
{
	if (result_len >= size_r - 1)
	{
		return (0);
	}
	r[result_len++] = carry + '0';
}

r[result_len] = '\0';

reverse_string(r);

return (r);
}

