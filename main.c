#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * main - entry point of the programme
 *
 *@ac: the no of arguments passed to the programme
 *@av: an arraya of the actual arguments
 *Return: EXIT_SUCCESS on success and EXIT_FAILURE on failure
 */
int main(int ac, char *av[])
{
	int fd;

	if (ac != 2)
	{
		dprintf(FILENO_STDERR, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fd = open(av[1], O_RDONLY, 0400);
	if (fd == -1)
	{
		dprintf(FILENO_STDERR, "ERROR: Can't open file %s\n", av[1]);
		exit(EXIT_FAILURE);
	}
	/* Read the file and check for errors */
	close(fd);
}
