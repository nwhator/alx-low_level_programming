#include "main.h"

/**
 * error - Prints an error mesage and exits with the given error code
 * @msg: Error message
 * @code: Error code to exit with
 */

void error(char *msg, int code)
{
	/* Prints error message to standard error */
	dprintf(STDERR_FILENO, msg, code);
	dprintf(STDERR_FILENO, "\n");
	/* Exits with given error code */
	exit(code);
}

/**
 * copy - Copies content from one file to another
 * @file_from - Name of the file to copy from
 * @file_to - Name of the file to copy to
 */

void copy(char *file_from, char *file_to)
{
	ssize_t fd, fd_in, fd_out, my_write;
	char buffer[BUFFER_SIZE];

	/* Open input file to be read */
	fd_in = open(file_from, O_RDONLY);
	if (fd_in < 0)
	{
		error("Error: Can't read from file %s", 98);
	}
	/* Opens output file for writing, create if it doesn't exist */
	fd_out = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0644);
	if (fd_out < 0)
	{
		error("Error: Can't write to %s", 99);
	}
	/* Copy content from input to output file */
	fd = read(fd_in, buffer, BUFFER_SIZE);
	my_write = write(fd_out, buffer, fd);
	while (fd > 0)
	{
		if (my_write < 0 || my_write != fd)
		{
			error("Error: Can't write to %s", 99);
		}
	}
	if (fd < 0)
	{
		error("Error: Can't read from file %s", 98);
	}
	if (close(fd_in) < 0)
	{
		error("Error: Can't close fd %d", 100);
	}
	if (close(fd_out) < 0)
	{
		error("Error: Can't close fd %d", 100);
	}
}

/**
 * main - Calls othe functions declare, copy and error
 * @argc: Number of arguements
 * @argv: Array of strings
 *
 * Return: 0, if successful
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		error("Usage: cp file_from file_to", 97);
	}
	copy(argv[1], argv[2]);

	return (0);
}
