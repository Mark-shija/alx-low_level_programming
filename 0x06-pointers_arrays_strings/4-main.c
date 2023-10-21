#include "main.h"
#include <stdio.h>

/**
 * print_array - prints the elements of an array
 * @a: an array of integers
 * @n: the number of elements to print
 *
 * Return: Nothing.
 */
void print_array(int *a, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
        if (i < n - 1)
        {
            printf(", ");
        }
    }
    printf("\n");
}

int main(void)
{
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};
    int n = sizeof(a) / sizeof(a[0]);

    printf("Original Array: ");
    print_array(a, n);

    reverse_array(a, n);

    printf("Reversed Array: ");
    print_array(a, n);

    return (0);
}

