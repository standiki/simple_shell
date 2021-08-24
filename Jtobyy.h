#ifndef _SIMPLE_SHELL_H
#define _SIMPLE_SHELL_H

typedef struct arg_list
{
char *token;
struct arg_list *next;
} arg_list;

#define _GNU_SOURCE
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <wait.h>


arg_list *linktoken(char *str, char *del);
char **linktolist(arg_list *head);
char **split(char *str, char *del);


#endif /* _SIMPLE_SHELL_H */
