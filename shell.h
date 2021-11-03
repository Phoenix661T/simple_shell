#ifndef _SHELL_H_
#define _SHELL_H_
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <errno.h>
int _strlen(const char *s);
char *_strcat(char *dest, char *src);
char *_strdup(char *duplicate);
char *_strcpy(char *dest, char *src);
int _strcmp(char *s1, char *s2);
int _strncmp(char *s1, const char *s2, int until);
void _printf(char *s);
void _free(char **);
char *get_line();
char **split_line(char *line);
int _stat(const char *path);
char *_getenv(const char *name, char **env);
char *_which(char *command, char **env);
int _fork(char **args, char **env);
int _execve(char *command, char **cmd, char **env);
void *_realloc(void *ptr, size_t old_size, size_t new_size);
#endif
