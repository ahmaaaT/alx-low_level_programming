#include "main.h"

/**
 * more_numbers - Prints numbers from 0 to 14, repeated 10 times each
 **/
void more_numbers(void)
{
int num, count;

for (count = 0; count < 10; count++)
{
	for (num = 0; num <= 14; num++)
	{
		if (num >= 10)
		{
			_putchar('0' + (num / 10));
		}
		_putchar('0' + (num % 10));
	}
	_putchar('\n');
}
}
