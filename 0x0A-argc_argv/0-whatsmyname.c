#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 * @argv: parameter
 * @argc: parameter 
 * Description: program that prints it's own name
 * Return: 0 Always success
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
