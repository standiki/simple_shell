#include "Jtobyy.h"
#include "shell.h"

/**
 *checkpathname - looks for a directory in the current PATH.
 *@dir: directory to search for
 *Return: 0 on success and -1 otherwise
 */
int checkpathname(char *dir)
{
int j; 
int i;
char *path;
char *tmp;
char *cp;
path = (_getenv("PATH"));
i = _strlen(path);
tmp = malloc(sizeof(*tmp) * i);
_strcpy(tmp, path);
for (j = 0; ; j++, tmp = NULL)
{
cp = strtok(tmp, ":");
if (_strcmp(dir, cp) == 0)
return (0);
if (cp == NULL)
break;
}
return (-1);
}
