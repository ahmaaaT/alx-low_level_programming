#include <stdio.h>

/**
 * print_space - Prints a space after the number or word, except for 100.
 *
 * @num: The current number.
 */
void print_space(int num)
{
if (num != 100)
	printf(" ");
}

/**
 * main - Prints numbers from 1 to 100 according to the FizzBuzz rules.
 *
 * Return: Always 0.
 */
int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
	if (i % 3 == 0 && i % 5 == 0)
		printf("FizzBuzz");
	else if (i % 3 == 0)
		printf("Fizz");
	else if (i % 5 == 0)
		printf("Buzz");
	else
		printf("%d ", i);
	print_space(i);
}

printf("\n");
return (0);
}
