#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - entrypoint
 * @argc: parameter
 * @argv: parameter
 *
 * Description: prints the number of arguments passed to it
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
