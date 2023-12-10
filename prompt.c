#include "shell.h"

/**
 * prompt - check if passed file is regualar or not and print
 * Prompt symbol if valid.
 * @st_buf: buffer that contains the information about file.
 * Return: Pointer to an array of tokens.
 */

void prompt(struct stat st_buf)
{
	/*get information about the file*/
	if (stat(STDIN_FILENO, &st_buf) != -1)
	{
		/*check if the file is regualr*/
		if (S_ISREG(st_buf.st_mode))
			_puts(PROMPT);
	}
}
