#include "shell.h"
/**
 * _fork - creates a new process from the parent
 * @args: command args.
 * @env: env variables.
 * Return: 0 on sucess, 1 on failure.
 */
int _fork(char **args, char **env)
{
pid_t index, pid;
int status;

index = fork();

if (index  == 0)
{
args[0] = _which(args[0], env);
if (args[0] != NULL)
_execve(args[0], args, env);

_free(args);
perror("Error, command not found");
exit(2);
}
else if (index > 0)
{
pid = wait(&status);
if (pid < 0)
{
perror("Error");
exit(-1);
}
wait(NULL);
}
else
{
perror("Error creating the child process");
exit(-1);
}
return (0);
}
