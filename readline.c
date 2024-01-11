#include "shell.h"
#define R_SIZE 1024
/**
 * main - entry point of the program
 * Return: 0 on success
 */
int main(void)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t read;

	while (1)
	{
		printf("$ ");
		read = _getline(&line, &len, stdin);
		if (read == -1)
		{
			printf("\n");
			break;
		}
		printf("%s\n", line);
	}
	free(line);
	return (0);
}
