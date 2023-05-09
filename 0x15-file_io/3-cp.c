#include "main.h"

char *allocate_buffer(char *filename);
void closer(int fd);

/**
 * allocate_buffer - Entry point
 * Description: Allocates bytes to be used by the buffer.
 * @filename: Name of the file
 *
 * Return: Buffer allocated
 */

char *allocate_buffer(char *filename)
{
	char *scrap;

	/* Allocate 1024 bytes of memory for buffer */
	scrap = malloc(sizeof(char) * 1024);

	if (scrap == NULL)
	{
		/* Prints error mesage if buffer allocation failes */
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (scrap);
}

/**
 * closer - Closes file
 * @fd: File description file
 */

void closer(int fd)
{
	int result;

	/* Close file descriptor */
	result = close(fd);
	if (result == -1)
	{
		/* Print error message if file descriptor closing fails */
		dprintf(STDERR_FILENO, "Error: Can't close fd%d\n", fd);
		exit(100);
	}
}

/**
 * main - Entry point
 * Description: Copies content within file to another file
 * @argc: Number of arguments
 * @argv: Array of strings
 *
 * Return: 0, if successful
 * exit code 97 if arguement count is incorrect
 * exit code 98 if file_from cant be read or doesn't exist
 * exit code 99 if file_to cannot be written or created
 * exit code 100 if file_to or file_from cannot be closed
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, my_read, my_write, alpha, beta;
	char buffer[BUFFER_SIZE];

	/* Print error message if argument count is incorrect */
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	/* Open source file for reading */
	file_from = open(argv[1], O_RDONLY);
	/* Read 1024 bytes from source file into buffer */
	my_read = read(file_from, buffer, BUFFER_SIZE);
	/* Open destination file for writing -rw-r--r-, with those permissions */
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0644);

	if (file_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	my_write = write(file_to, buffer, my_read);
	while (my_read > 0)
	{
		if (file_to || my_write != my_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(file_from);
			exit(99);
		}
	}
	if (my_read < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	alpha = close(file_from);
	beta = close(file_to);
	if (alpha < 0 || beta < 0)
	{
		if (alpha < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		if (beta < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
