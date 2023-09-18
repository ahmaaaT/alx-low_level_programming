#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: A pointer to the first integer.
 * @b: A pointer to the second integer.
 */
void swap_int(int *a, int *b)
{
int temp = *a;/* Store the value of 'a' in a temporary variable*/
*a = *b;/* Update 'a' with the value of 'b'*/
*b = temp;/* Update 'b' with the original value of 'a'*/
}
