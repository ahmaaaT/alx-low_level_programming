#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - Finds the largest prime factor of a number.
 *
 * @n: The number to find the largest prime factor of.
 *
 * Return: The largest prime factor.
 */
long largest_prime_factor(long n)
{
long max_prime = -1;
long i = 3;

while (n % 2 == 0)
{
	max_prime = 2;
	n /= 2;
}

while (i <= sqrt(n))
{
	while (n % i == 0)
	{
		max_prime = i;
		n /= i;
	}
	i += 2;
}

if (n > 2)
	max_prime = n;

return (max_prime);
}

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
long number = 612852475143;
long result = largest_prime_factor(number);

printf("%ld\n", result);
return (0);
}
