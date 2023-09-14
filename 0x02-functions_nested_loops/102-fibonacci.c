#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
int n, i;
long long int fib1 = 1, fib2 = 2, next;

printf("%lld, %lld, ", fib1, fib2);

for (i = 3; i <= 50; i++)
{
	next = fib1 + fib2;
	if (i < 50)
		printf("%lld, ", next);
	else
		printf("%lld\n", next);

	fib1 = fib2;
	fib2 = next;
}
return (0);
}
