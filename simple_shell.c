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
size_t n;
int c;
int i;
int w;
char *lineptr;
char *execbuf[2];
if (argc != 1)
return (0);
for (i = 0; ; i++)
{
if (isatty(STDIN_FILENO))
write(STDIN_FILENO, "$ ", 2);
lineptr = NULL;
n = getline(&lineptr, &n, stdin);
if (n == (size_t)-1)
break;
c = _strlen(lineptr);
lineptr[c - 1] = '\0';
execbuf[0] = lineptr;
execbuf[1] = NULL;
if (fork() == 0)
{
if (execve(execbuf[0], execbuf, NULL) == -1)
{
perror(argv[0]);
free(execbuf[0]);
_exit(c);
continue;
}
}
else
{
wait(&w);
free(lineptr);
continue;
}
}
free(lineptr);
return (0);
}
