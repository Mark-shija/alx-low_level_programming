#include "main.h"
#include <stdio.h>

/*
 * main - prints the number of argument followed,
 * by new line.
 * @argc: number of arguments.
 * @argv: array containing arguments
 *
 *Return: Always 0 success.
 **/
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
