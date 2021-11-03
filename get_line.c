#include "shell.h"

/**
 * get_line - get a string from the stdin
 * Return: on success returne the number of characters read
 */
char *get_line()
{
char *line = NULL, *aux = NULL;
size_t n = 0;

if (getline(&line, &n, stdin) == EOF)
{
free(line);
exit(0);
}
aux = _strdup(line);
free(line);
return (aux);
}
