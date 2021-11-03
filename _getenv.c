#include "shell.h"
/**
 * _getenv - looks for the path
 * @name: variable to be look
 * @env: env variables
 * Return: a pointer to a string
 */
char *_getenv(const char *name, char **env)
{
size_t  i;
char *p;

for (i = 0; env[i] != NULL; i++)
{
if (_strncmp(env[i], name, 4) == 0)
{
p = env[i];
return (p);
}
}
return (NULL);
}
