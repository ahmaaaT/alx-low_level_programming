#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

/**
 * positive_or_negative - prints if a number is positive, zero, or negative
 * @n: The number to check
 *
 * Return: No return value (void)
 */
void positive_or_negative(int n)
{
if (n > 0)
{
	printf("%d is positive\n", n);
}
else if (n == 0)
{
	printf("%d is zero\n", n);
}
else
{
	printf("%d is negative\n", n);
}
}

#endif /*MAIN_H*/
