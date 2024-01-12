#ifndef SHELL_H
#define SHELL_H

/*** included header files ***/
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

ssize_t _getline(char **line, size_t *len, FILE *stream);
char **split_str(const char *in, const char *delim, size_t *wc);
#endif
