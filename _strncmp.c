#include "shell.h"
/**
 * _strncmp - Compare the first n letters of two strings
 * @s1: string
 * @s2: string
 * @until: Until wich character is going to compare
 * Return: negative int if s1 < s2, 0 if matching, and positive int if s1 > s2
 */

int _strncmp(char *s1, const char *s2, int until)
{
int x = 0;

for (x = 0; x < until; x++)
{
if (s1[x] != s2[x])
{
return (s1[x] - s2[x]);
}
}
return (0);
}
