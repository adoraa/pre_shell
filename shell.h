#ifndef SHELL_H
#define SHELL_H

/*** included header files ***/
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

ssize_t _getline(char **line, size_t *len, FILE *stream);

#endif
