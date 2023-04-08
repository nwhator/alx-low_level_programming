#include "main.h"

/**
 * read_textfile - Entry point
 * Description: Reads a text file and prints it to the POSIX standard output
 * @filename: Name of the file to be read
 * @letters: The number of letters it should read and print
 *
 * Return: The actual number of letters it could read and print
 *		if the file can not be opened or read, return 0
 *		if filename is NULL return 0
 *		if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer; /* Buffer to store text */
	ssize_t fd, my_read, my_write;
	/* File descriptor, number of bytes read or written */

	/* Check if filename is NULL */
	if (!filename)
		return (0);
	/* Allocate memory for the buffer */
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);
	/* Open the file to be read and store fd*/
	fd = open(filename, O_RDONLY);
	/* Read from the file and stores number of bytes read */
	my_read = read(fd, buffer, letters);
	/* Write to standard output and store the number of bytes written */
	my_write = write(STDOUT_FILENO, buffer, my_read);
	if (fd == -1 || my_read == -1 || my_write != my_read)
	{
		free(buffer);
		return (0);
	}
	/* Free the memory and close the file descriptor (fd) */
	free(buffer);
	close(fd);

	return (my_write);
}
