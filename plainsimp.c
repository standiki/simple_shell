#include "main.h"
#include "holberton.h"

/**
 *main - super simple shell
 *Return: always 0
 */
int main(void)
{
size_t n;
int c;
int i;
int w;
char *lineptr;
char *execbuf[2];
for (i = 0; ; i++)
{
if (isatty(STDIN_FILENO))
{
write(STDIN_FILENO, "$ ", 2);
}
lineptr = NULL;
n = getline(&lineptr, &n, stdin);
if (n == -1)
break;
c = _strlen(lineptr);
lineptr[c - 1] = '\0';
execbuf[0] = lineptr;
execbuf[1] = NULL;
if (fork() == 0)
{
if (execve(execbuf[0], execbuf, NULL) == -1)
{
free(execbuf[0]);
continue;
}
}
else
{
wait(&c);
free(lineptr);
continue;
}
}
free(lineptr);
return (0);
}
