#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints the content of a buffer in a specific format.
 * @b: The buffer to print.
 * @size: The size of the buffer.
 */
void print_buffer(char *b, int size)
{
int i, j;
char c;

if (size <= 0)
{
	printf("\n");
}

for (i = 0; i < size; i += 10)
{
	printf("%08x: ", i);

	for (j = 0; j < 10; j++)
	{
		if (i + j < size)
			printf("%02x", (unsigned char)b[i + j]);

		if (j % 2 != 0)
			printf(" ");

		if (j == 9)
			printf(" ");
	}

	for (j = 0; j < 10; j++)
	{
		if (i + j < size)
		{
		c = b[i + j];
			if (c >= ' ' && c <= '~')
				printf("%c", c);
			else
				printf(".");
		}
	}

	printf("\n");
}
}
