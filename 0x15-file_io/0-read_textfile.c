#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 *  read_textfile - function name
 * @filename: pointer to file name
 * @letters: amount of bytess to be reserved for STDOUT
 *
 * Description: reads a text file and prints to the STDOUT
 * Return: no of letters to be printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	int fd, readed;
	char *buff = malloc(sizeof(char *) * letters);

	if (!buff)
		return (0);

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY, 0600);
	if (fd == -1)
		return (0);

	readed = read(fd, buff, letters);
	write(STDOUT_FILENO, buff, readed);

	free(buff);
	close(fd);
	return (readed);
}
