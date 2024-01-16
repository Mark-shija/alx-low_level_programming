#include "main.h"
#include <stdio.h>

/*
 * main - print the number of arguments passed
 * @argc: number of arguments.
 * @argv: array containing arguments
 *
 *Return: Always 0 success.
 **/
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n",argc - 1);
	return 0;
}
