#include "shell.h"
/**
 * exec_ls - executes ls -l /tmp in 5 different child processes
 * Return: void
 */
void exec_ls(void)
{
	int i, status;
	pid_t child_pid;
	char *argv[] = {"/bin/ls", "-l", "/tmp", NULL};

	for (i = 0; i < 5; ++i)
	{
		child_pid = fork();
		if (child_pid == -1)
			perror("Error: Failed to retrieve PID");
		if (child_pid == 0)
		{
			if (execve(argv[0], argv, NULL) == -1)
			{
				perror("Error: Failed to retrieve PID");
				exit(EXIT_FAILURE);
			}
		} else
		{
			waitpid(child_pid, &status, 0);
			if (status != 0)
			{
				printf("Child %d exited with non-zero status %d\n", i + 1, status);
			}
		}
	}
}
