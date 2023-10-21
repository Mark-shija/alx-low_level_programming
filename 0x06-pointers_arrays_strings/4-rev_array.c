#include "main.h"

/**
 * reverse_array - prints array in reverse
 * @a: function parameter
 * @n: function parameter
 * return: voind function
 */
void reverse_array(int *a, int n)
{
	int swap, begin, end;

	swap = 0;
	end = n - 1;
	while (begin < end)
	{
		swap = a[begin];
		a[begin] = a[end];
		a[end] = swap;
		begin++;
		end--;
	}
}
