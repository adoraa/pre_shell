#include "shell.h"
/**
 * main - entry point of the program
 * @ac: argument counter
 * @av: NULL-terminated array of strings
 * Return: 0 on success
 */
int main(int ac, char **av)
{
	int i;

	for (i = 1; av[i] != NULL; ++i)
		printf("%s\n", av[i]);
	return (0);
}
