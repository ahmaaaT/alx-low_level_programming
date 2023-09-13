# include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: Prints x 10 the alphabet, in lowercase, followed by a new line
 *
 * Return: Always 0 (Success)
 **/

void print_alphabet_x10(void)
{
	char letter;
	int i;

	for (i = 0; i < 10; ++i)
	{

		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
		++letter;
		}
		_putchar('\n');
	}
}
