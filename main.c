#include "shell.h"

/**
 * main - one function to rule then all
 * @argc: number of args
 * @argv: arguments
 * @env: env variables
 * Return: 0 on success
 */
int main(__attribute__((unused))int argc,
	 __attribute__((unused))char **argv, char **env)
{
char *line = NULL;
char **args = NULL;
int quit = 0;

while (quit == 0)
{
if (isatty(STDIN_FILENO))
_printf("~$ ");

line = get_line();

if (line[0] != 10)
{
args = split_line(line);
if (_strcmp(args[0], "exit") == 0)
quit = 1;
else
_fork(args, env);

free(args);
}
free(line);
}
return (0);
}
