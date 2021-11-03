#include "shell.h"
/**
 * split_line - split a line into diferent arguments
 * @line: the comand given by the user
 * Return: return the tokens
 */
char **split_line(char *line)
{
int buffer_size = 1024;
int i;
char **tokens = NULL;
char *token = NULL;

tokens = malloc(sizeof(char *) * buffer_size);
if (tokens == NULL)
exit(1);

token = strtok(line, " \t\r\n\a :");
for (i = 0; token != NULL; i++)
{
tokens[i] = token;
if (i >= buffer_size)
{
buffer_size += buffer_size;
tokens = _realloc(line, i, sizeof(char *) * buffer_size);
if (tokens == NULL)
exit(1);
}
token = strtok(NULL, " \t\r\n\a :");
}
tokens[i] = NULL;
return (tokens);
}
