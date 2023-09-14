#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
long long int sum = 0;
long long int a = 1, b = 2, temp;

while (a <= 4000000)
{
	if (a % 2 == 0)
	{
		sum += a;
	}
	temp = a;
	a = b;
	b = temp + b;
}
printf("%lld\n", sum);
return (0);
}
