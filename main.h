#ifndef _SIMPLE_SHELL_H
#define _SIMPLE_SHELL_H

/**
 *struct arg_list - singly linked list of argument element
 *or rather an string returned by strtok
 *@token: a string
 *@next: pointer to the next string/node
 *
 *Description: it connects each string returned by strtok
 *to each other which allows for storing elments
 *withot prior knowledge of the amount of elements to store
 *for simple shell project
 */
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
int checksignal(char *str);
char *doinitials(char *);
char *_getenv(char *name);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
int _strcmp(char *s1, char *s2);
int checkpathname(char *dir);
void free_list(arg_list *head);
char *_strdup(char *src);

#endif /* _SIMPLE_SHELL_H */
