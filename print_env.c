#include "main.h"
#include "holberton.h"

/**
 * print_env - prints the environment string to stdout
 *
 * Return: 0
 */
void print_env(void)
{
int x;
int len;
char **env;
x = 0;
env = environ;
while (env[x])
{
len = 0;
while (env[x][len] != '\0')
len++;
write(STDOUT_FILENO, env[x], len);
write(STDOUT_FILENO, "\n", 1);
x++;
}
}
