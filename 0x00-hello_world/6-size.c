#include <stdio.h>

/**
 * main - Entry point
 *
 * The program prints the size of different data types on std output
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
    int a;
    char b;
    long long int c;
    float f;
    long int d;

    printf("Size of a char: %zu bytes\n", sizeof(b));
    printf("Size of an int: %zu bytes\n", sizeof(a));
    printf("Size of a long int: %zu bytes\n", sizeof(d));
    printf("Size of a long long int: %zu bytes\n", sizeof(c));
    printf("Size of a float: %zu bytes\n", sizeof(f));
    return (0);
}
