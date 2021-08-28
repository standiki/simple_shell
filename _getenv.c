#include "main.h"
#include "holberton.h"

/**
 *_getenv - gets an environmental variable without
 *the use of getenv
 *@name: variable to get
 *Return: pointer to variable value if found
 */
char *_getenv(char *name)
{
int i;
int j;
int k;
char *token;
char *p;
i = 0;
while (environ[i] != NULL)
{
token = strtok(environ[i], "=");
if (token == NULL)
break;
j = _strcmp(name, token);
if (j == 0)
{
for (j = _strlen(token) + 1; environ[i][j] != '\0'; j++)
p = malloc(sizeof(char) * (++j));
k = 0;
for (j = _strlen(token) + 1; environ[i][j] != '\0'; j++)
{
p[k] = environ[i][j];
k++;
}
return (p);
}
i++;
}
return (NULL);
}
