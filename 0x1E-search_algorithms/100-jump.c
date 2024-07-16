#include <stdio.h>
#include <math.h>
#include "search_algos.h"

int jump_search(int *array, size_t size, int value) {
    size_t step;
    size_t prev;
    size_t next;
    size_t i;

    if (array == NULL || size == 0) {
        return -1;
    }

    step = sqrt(size);
    prev = 0;
    next = step;

    /* Finding the block where the value may be present */
    while (prev < size && array[next - 1] < value) {
        printf("Value checked array[%lu] = [%d]\n", (unsigned long)prev, array[prev]);
        prev = next;
        next += step;
        if (next > size) {
            next = size;
        }
    }

    /* Printing the range where the value might be */
    printf("Value found between indexes [%lu] and [%lu]\n", (unsigned long)prev, (unsigned long)next);

    /* Performing a linear search within the block */
    for (i = prev; i < size && i < next; i++) {
        printf("Value checked array[%lu] = [%d]\n", (unsigned long)i, array[i]);
        if (array[i] == value) {
            return i;
        }
    }

    return -1;
}
