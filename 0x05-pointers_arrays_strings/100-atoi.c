#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: A pointer to the input string.
 *
 * Return: The integer value of the converted string.
 */
int _atoi(char *s)
{
int sign = 1;
int result = 0;
int i = 0;
int overflow = 0;
int digit;

while (s[i] == ' ')
{
	i++;
}

if (s[i] == '-')
{
	sign = -1;
	i++;
}
else if (s[i] == '+')
{
	i++;
}

while (s[i] >= '0' && s[i] <= '9')
{
	digit = s[i] - '0';

	if (result > (INT_MAX - digit) / 10)
	{
		overflow = 1;
		break;
	}

	result = result * 10 + digit;
	i++;
}

if (overflow)
{
	return ((sign == 1) ? INT_MAX : INT_MIN);
}
return (result * sign);
}
