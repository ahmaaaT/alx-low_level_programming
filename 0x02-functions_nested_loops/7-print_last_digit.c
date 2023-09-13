# include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number
 *
 * Return: Last digit of a number
 **/

int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		n = -n;
	}
	last_digit = n % 10;
	_putchar('0' + last_digit);
	return (n);
}
