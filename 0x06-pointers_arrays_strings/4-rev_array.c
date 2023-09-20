#include "main.h"
/**
 * reverse_array -  a function reverses arrays
 * @a: 1st parameter
 * @n: 2nd parameter
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
