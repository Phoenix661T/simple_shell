#include "shell.h"
/**
 * _execve - execve implementation for Simple Shell.
 * @command: Command to execute.
 * @cmd: Command to execute.n
 * @env: env variables
 *
 * Return: Always 0.
 */
int _execve(char *command, char **cmd, char **env)
{

if (execve(command, cmd, env) == -1)
{
perror("Error in execve");
}
return (0);
}
