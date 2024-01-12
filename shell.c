#include "shell.h"
/**
 * shell - handles simple commands
 * @line: file to be executed
 * Return: void
 */
void shell(char *line)
{
	if (strcmp(line, "/bin/ls\n") == 0)
		exec_ls();
	if (strcmp(line, "./pid\n") == 0)
		pid();
	else
		printf("Command not recognised: %s\n", line);
}
