#include "shell.h"
/**
 * _which - Find the directory needed
 * @command: Command received
 * @env: env variables
 *
 * Return: pointer string with found path or NULL in failure.
 */
char *_which(char *command, char **env)
{
char *aux = NULL, **path = NULL, *split = NULL;
int size, x = 0;

size = _strlen(command);
if (!command)
return (NULL);

split = _getenv("PATH", env);
path = split_line(split);
while (path[x] != NULL)
{
if (_strcmp(path[x], "PATH=") == 0)
{
if (_stat(command) == 0)
{free(path);
return (command);
}
}
aux = malloc(_strlen(path[x]) + size + 1);
if (aux == NULL)
{free(path);
return (aux);
}
aux = _strcpy(aux, path[x]);
aux = strcat(aux, "/");
aux = strcat(aux, command);
if (_stat(aux) == 0)
{free(path);
return (aux);
}
free(aux);
x++;
}
free(path);
if (_stat(command) == 0)
return (command);
return (NULL);
}
