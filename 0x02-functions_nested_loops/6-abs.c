# include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 *@n: integer value
 *
 * Return: -n if n < 0, n if n >= 0.
 **/
int _abs(int n)
{

	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
	return (0);
}
