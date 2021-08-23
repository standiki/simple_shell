#include "Jtobyy.h"

/**
 *main - a first version of a super simple shell
 *that can run commands with their full path, without any argument.
 *@argc: number of command line arguments
 *@argv: array of command line arguments
 *Return: Always 0
 */
int main(int argc, char **argv)
{
int i;
char *lineptr;
char *args[2];
size_t n;
int w;
if (argc != 1)
{
write(STDERR_FILENO, "usage: ./hsh\n", 13);
exit(100);
}
for (i = 0; ; i++)
{
write(STDERR_FILENO, "$ ", 2);
lineptr = NULL;
n = getline(&lineptr, &n, stdin);
if (n != (size_t)-1)
args[0] = lineptr;
else
break;
args[1] = NULL;
args[0][n - 1] = '\0';
if (fork() == 0)
{
if (execve(args[0], args, NULL) == -1)
{
free(lineptr);
perror(argv[0]);
exit(2);
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

