#include "main.h"

/**
 * reverse_array - reverses array of integers
 * @a: array
 * @n: number of elements of the array
 * Return: rev
 */
void reverse_array(int *a, int n)
{
	int k;
	int m;

	for (k = 0; k < n; k++)
	{
		n--;
		m = a[k];
		a[k] = a[n];
		a[n] = m;
	}
}
