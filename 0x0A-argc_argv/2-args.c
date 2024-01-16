#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments passed to.
 * @argc: number of arguments
 * @argv: array of variable.
 *
 * Return: Always 0 success.
 **/
int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
