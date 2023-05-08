#ifndef MY_MAIN_H
#define MY_MAIN_H

/*
 * Description: Header file containing prototypes for all functions
 * for the 0x15-file_io project
 */

/* Libraries Used in the Project */
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>

/* Prototypes */
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif /* MY_MAIN_H */
