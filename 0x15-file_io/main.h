#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <stdio.h>
int _putchar(char *c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void checkfile(int file_from, int file_to, char **arr);
void print_error(char *str, int code, char *file);
void copy_to_file(char **arr);
#endif
