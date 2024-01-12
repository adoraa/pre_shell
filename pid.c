#include "shell.h"
/**
 * pid - prints the process ID of a
 * Return: void
 */
void pid(void)
{
	pid_t p_pid;

	p_pid = getppid();
	printf("Parent PID: %u\n", p_pid);
}
