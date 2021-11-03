#include "shell.h"
/**
 * *_strcat - Print the last digit
 * @dest: Number that is going to be splited
 * @src: Number that is going to be splited
 * Return: Return the last digit
 */
char *_strcat(char *dest, char *src)
{
int size1 = _strlen(dest);
int size2 = _strlen(src);
int x;
int y = 0;

for (x = size1; x < (size1 + size2); x++)
{
dest[x] = src[y];
y++;
}
dest[x] = '\0';
return (dest);
}

/**
 * _strcmp - Compare two strings
 * @s1: string
 * @s2: string
 * Return: negative int if s1 < s2, 0 if matching, and positive int if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
int x;

for (x = 0; s1[x] != '\0' || s2[x] != '\0'; x++)
{
if (s1[x] != s2[x])
{
return (s1[x] - s2[x]);
}
}
return (0);
}

/**
 * *_strcpy - copy the string
 * @dest: char type string
 * @src: char type string
 * Return: Pointer to `dest`
 */

char *_strcpy(char *dest, char *src)
{
int x;
int c = 0;

while (src[c] != '\0')
{
c++;
}
for (x = 0; x < c; x++)
{
dest[x] = src[x];
}
dest[c] = '\0';
return (dest);
}

/**
 * _strdup - returns pointer to new mem alloc space which contains copy
 * @duplicate: string to be duplicated
 * Return: a pointer to the new duplicated string
 */
char *_strdup(char *duplicate)
{
char *copy = NULL;
int len, i;

if (duplicate == 0)
return (NULL);

for (len = 0; duplicate[len]; len++)
;
copy = malloc((len + 1) * sizeof(char));

for (i = 0; i <= len; i++)
copy[i] = duplicate[i];

return (copy);
}

/**
 * _strlen - Print the last digit
 * @s: Number that is going to be splited
 * Return: Return the last digit
 */
int _strlen(const char *s)
{
int c = 0;

while (s[c] != '\0')
{
c++;
}
return (c + 1);
}
