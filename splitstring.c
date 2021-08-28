#include "main.h"

/**
*split - splits a string using a delimiter
*@str: string to work on
*@del: delimiter to use
*Return: pointer to array where
*tokens(separated strings) are stored
*/
char **split(char *str, char *del)
{
int i;
char *c;
char **arr;
char *tmp;
if (!str || !del)
exit(98);
i = 0;
while (str[i] != '\0')
i++;
arr = malloc(sizeof(*str) * i);
if (arr == NULL)
exit(99);
tmp = strdup(str);
for (i = 0; ; i++, tmp = NULL)
{
c = strtok(tmp, del);
arr[i] = c;
if (c == NULL)
break;
}
return (arr);
}
