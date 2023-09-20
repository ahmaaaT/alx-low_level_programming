#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: An array of integers.
 * @n: The number of elements in the array.
 *
 * Return: No return value (void).
 */
void reverse_array(int *a, int n)
{
int left = 0;
int right = n - 1;
int temp;

while (left < right)
{
/* Swap the elements at the left and right positions*/
	temp = a[left];
	a[left] = a[right];
	a[right] = temp;

/* Move the left pointer to the right and the right pointer to the left*/
	left++;
	right--;
}
}
