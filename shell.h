#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>

#define BUFFER 1024
#define TRUE 1
#define PROMPT "$ "
/* error strings */
#define ERR_MALLOC "Unable to malloc space\n"
#define ERR_FORK "Unable to fork to create child process\n"
#define ERR_PATH "No such file or directory\n"
extern char **environ;

/* utility functions */
void _puts(char *str);
int str_len(char *s);
int str_cmp(char *str1, char *str2, unsigned int length);
char *str_cpy(char *dest, char *src);

char *get_line();
char **str_toknize(char *input);
int create_child(char *file_path, char **args);
void prompt(struct stat st_buf);

#endif /*SHELL.H*/
