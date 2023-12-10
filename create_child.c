#include "shell.h"

/**
 * create_child - use to create child of process.
 * @file_path: file path.
 * @args: user args.
 * Return: on success return 0 ,on Failure reuturn -1.
 */

int create_child(char *file_path, char **args)
{
	pid_t child_pid;
	int status;
	char **envp = environ;
	int exe_status;

	child_pid = fork();
	if (child_pid == -1)
	{
		perror("Error:");
		exit(EXIT_FAILURE);
	}
	if (child_pid == 0)
	{
		/*run by child*/
		exe_status = execve(file_path, args, envp);
		if (exe_status == -1)
			return (exe_status);
	}
	else
	{
		/*run by parant*/
		wait(&status);
	}
	return (0);
}
