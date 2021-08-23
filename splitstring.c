#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>


/**
*main - splits a string using a delimiter
*@argc: no of command line arguments
*@argv: NULL terminating array of cmd line arguments
*Return: Always 0
*/
int main(int argc, char *argv[])
{
int i;
char *str;
char *c;
char **arr;
if (argc != 3)
{
dprintf(STDERR_FILENO, "usage: exec_file string del\n");
exit(98);
}
str = argv[1];
i = 0;
while (str[i] != '\0')
i++;
arr = malloc(sizeof(char *) * i);
for (i = 0; ; i++, str = NULL)
{
c = strtok(str, argv[2]);
arr[i] = c;
if (c == NULL)
break;
printf("%s", arr[i]);
}
putchar('\n');
return (0);
}
