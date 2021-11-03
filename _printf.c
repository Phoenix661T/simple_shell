#include "shell.h"
/**
 * _printf - print a string to the stdout
 * @s: string to be printed
 */
void _printf(char *s)
{
write(1, s, _strlen(s));
}
