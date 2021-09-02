#include "main.h"
#include "holberton.h"

/**
 *main - super simple shell
 *@argc: number of command line arguments
 *@argv: array of cmd line args
 *Return: always 0
 */
int main(int argc, char *argv[])
{
int i;
int w;
size_t n;
char *lineptr;
char *tmp;
char *execbuf[2];
if (argc != 1)
return (0);
for (i = 0; ; i++)
{
if (isatty(STDIN_FILENO))
write(STDIN_FILENO, "$ ", 2);
lineptr = NULL;
n = 0;
n = getline(&lineptr, &n, stdin);
tmp = doinitials(lineptr, n);
if (tmp == NULL)
continue;
execbuf[0] = tmp;
execbuf[1] = NULL;
if (fork() == 0)
{
if (execve(execbuf[0], execbuf, NULL) == -1)
{
perror(argv[0]);
free(execbuf[0]);
_exit(0);
continue;
}
}
else
{
wait(&w);
free(tmp);
continue;
}
}
free(tmp);
return (0);
}

/**
 *doinitials - subcode for main
 *@lineptr: lineptr var from main
 *@n: n variable from main
 *Return: always 0
 */
char *doinitials(char *lineptr, size_t n)
{
char *tmp;
if (n == (size_t)-1)
{
free(lineptr);
exit(0);
}
tmp = NULL;
tmp = _strdup(strtok(lineptr, " \n"));
free(lineptr);
return (tmp);
}
