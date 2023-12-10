#include "shell.h"

/**
 * get_line - responsible for reading line of input from user.
 * Return: The buffer containing user input.
 */
char *get_line()
{
	char *line;
	size_t len;
	ssize_t read;

	line = NULL;
	len = 0;

	read = getline(&line, &len, stdin);
	if (read == -1)
	{
		free(line);
		exit(EXIT_SUCCESS);
	}
	return (line);
}
