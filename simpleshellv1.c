#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <wait.h>

/**
 *main - a first version of a super simple shell
 *that can run commands with their full path, without any argument.
 *Return: Always 0
 */
int main(void)
{
int i;
char *lineptr;
char *argv[2];
size_t n;
int w;
printf("#Jtoby's simple shell v1#\n");
for (i = 0; ; i++)
{
printf("#sshell$ ");
lineptr = NULL;
n = getline(&lineptr, &n, stdin);
argv[0] = lineptr;
argv[1] = NULL;
argv[0][n - 1] = '\0';
if (fork() == 0)
{
if (execve(argv[0], argv, NULL) == -1)
{
perror("Error");
exit(2);
}
}
else
{
wait(&w);
continue;
}
}
return (0);
}

