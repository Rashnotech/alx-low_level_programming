#ifndef MAIN_H
#define MAIN_H
#include <sys/types.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void file_check(char *file);
int copy_from_file(char *file_from, char *file_to);
void print_error(char *message, char *filename, int exit_status);
void close_file(int fd);
#endif
