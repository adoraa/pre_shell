#include "shell.h"
/**
 * main - entry point of the program
 * Return: void
 */
int main(void)
{
	pid_t p_pid;

	p_pid = getppid();
	printf("Parent PID: %u\n", p_pid);
	return (0);
}
