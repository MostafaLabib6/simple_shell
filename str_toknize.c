#include "shell.h"

/**
 * str_toknize - Tokenizes a string into an array of tokens.
 * @input: User input string to be tokenized.
 * Return: Pointer to an array of tokens.
 */
char **str_toknize(char *input)
{
	char *token;
	char **tokens; /*array of tokens to be returned*/
	char *delimiter;
	int i;

	delimiter = " \t\n\r";
	tokens = malloc(sizeof(char) * BUFFER);
	if (tokens == NULL)
	{
		exit(EXIT_FAILURE);
	}

	token = strtok(input, delimiter);

	i = 0;
	while (token != NULL)
	{
		tokens[i] = token;
		token = strtok(NULL, delimiter);
		++i;
	}
	tokens[i] = NULL;
	return (tokens);
}
