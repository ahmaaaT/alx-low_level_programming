#include <stdio.h>

/**
 * main - Entry point, causes an infinite loop
 *
 * Return: Always 0.
 */

int main(void)
{
int i;

printf("Infinite loop incoming :(\n");
i = 0;
/*
 * Commenting out the problematic while loop
 * while (i < 10)
 * {
 * putchar(i);
 * }
*/
printf("Infinite loop avoided! \\o/\n");
return (0);
}
