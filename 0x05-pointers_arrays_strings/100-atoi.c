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
int sign = 1;/* Initialize the sign as positive*/
int result = 0;
int i = 0;
int num_started = 0;/* Flag to check if digits have started*/

while (s[i] != '\0')
{
	if (s[i] == '-')
		sign *= -1;
	else if (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
		num_started = 1;
	}
	else if (num_started)
		break;/* Stop at the first non-digit character after numbers have started*/
	i++;
}

return (result * sign);
}
