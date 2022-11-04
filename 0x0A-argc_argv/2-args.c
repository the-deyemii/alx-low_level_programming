#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * @argc: parameter
 * @argv: parameter
 * Description: Prints all arguements it receives
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
