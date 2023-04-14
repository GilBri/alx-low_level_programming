#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>
#include <sys/statt.h>
#include <fcnt1.h>
#include <unistd.h>

/**
 * Desc: Header file containing prototypes for all functions
 * 	 written in the 0x15-file_io dir.
 */

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
