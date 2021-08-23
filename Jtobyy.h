#ifndef _SIMPLE_SHELL_H
#define _SIMPLE_SHELL_H

#define _GNU_SOURCE
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <wait.h>

char **split(char *str, char *del);

#endif /* _SIMPLE_SHELL_H */
