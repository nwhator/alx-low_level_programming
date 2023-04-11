#include "main.h"

char *allocate_buffer(char *filename);
void close_file_descriptor(int fd);

/**
 * allocate_buffer - Entry point
 * Description: Allocates bytes to be used by the buffer.
 * @filename: Name of the file
 *
 * Return: Buffer allocated
 */

char *allocate_buffer(char *filename)
{
	char *buffer;

	/* Allocate 1024 bytes of memory for buffer */
	buffer = malloc(sizeof(char) * 1024);

	if (!buffer)
	{
		/* Prints error mesage if buffer allocation failes */
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (buffer);
}

/**
 * close_file_descriptor - Closes file
 * @fd: File description file
 */

void close_file_descriptor(int fd)
{
	int result;

	/* Close file descriptor */
	result = close(fd);
	if (result == -1)
	{
		/* Print error message if file descriptor closing fails */
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies content within file to another file
 * @argc: Number of arguments
 * @argv: Array of strings
 *
 * Return: 0, if successful
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, my_read, my_write;
	char *buffer;

	/* Print error message if argument count is incorrect */
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	/* Allocates buffer */
	buffer = allocate_buffer(argv[2]);
	/* Open source file for reading */
	file_from = open(argv[1], O_RDONLY);
	/* Read 1024 bytes from source file into buffer */
	my_read = read(file_from, buffer, 1024);
	/* Open destination file for writing -rw-r--r-, with those permissions */
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0644);

	while (my_read > 0)
	{
		/* Print error message if reading from source file fails */
		if (file_from == -1 || my_read == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		my_write = write(file_to, buffer, my_read);
		/* Print error message if writing to destination file fails */
		if (file_to == -1 || my_write == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		my_read = read(file_from, buffer, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);
	}
	free(buffer);
	close_file_descriptor(file_from);
	close_file_descriptor(file_to);
	/* If successful, return 0 */
	return (0);
}
