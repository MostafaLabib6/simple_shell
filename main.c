#include "shell.h"

int main(void)
{
    char *line, env, file_name;
    char **tokens;
    int create_status;
    struct stat buf;

    while (1)
    {
        /*prints the prompt*/
        prompt(buf);
        line = get_line();
        if (str_cmp(line, "\n", 1) == 1)
        {
            free(line);
            continue;
        }
        /*generate token and the check if empty or not*/
        tokens = str_toknize(line);
        if (tokens[0] == NULL)
        { /*means that the line is empty.*/
            free(tokens);
            continue;
        }

        create_status = create_child(tokens[0], tokens);
        if (create_status == -1)
        {
            printf("Createion error");
        }
        free(line);
        free(env);
        free(file_name);
        free(buf);
        free(create_status);
        free(tokens);
    }
}
