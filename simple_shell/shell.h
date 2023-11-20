#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <limits.h>
#include <fcntl.h>
#include <errno.h>

#define BUFF_SIZE 100
#define ARR_SIZE 10

/*Free things*/
void _free(char **dp);

/*String Functions*/
char *_cpy_from_to(char *str, size_t from, size_t to);
char *_strcpy(char *dest, char *src);
char *_strdup(char *str);
int _strlen(char *str);
char *_strncpy( char *dest, char *src, size_t n);
char **_strtok(char *str, char del);
int _getchar();
int _getline(char **buffer, size_t *size);


#endif
