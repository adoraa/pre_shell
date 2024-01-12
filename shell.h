#ifndef SHELL_H
#define SHELL_H

/*** included header files ***/
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>

extern const char **environ;

/*** Utility Prototypes ***/
ssize_t _getline(char **line, size_t *len, FILE *stream);
void shell(char *line);

/*** Other Prototypes ***/
char **split_str(const char *in, const char *delim, size_t *wc);
char **notoken_split(const char *in, const char *delim, size_t *wc);
void exec_ls(void);
void pid(void);

#endif
