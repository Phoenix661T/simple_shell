#include "shell.h"

/**
 * _free - free allocated memory
 * @args: argument to free
 */
void _free(char **args)
{
int i = 0;

while (args[i] != NULL)
{
free(args[i]);
i++;
}
}
