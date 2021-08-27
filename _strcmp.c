#include "Jtobyy.h"
#include "shell.h"

/**
 *_strcmp - compares two strings
*@s1: string 1
*@s2: string 2
*Return: 0 if equal and difference otherwise
*/

int _strcmp(char *s1, char *s2)
{
int i;
int j;
int k;
i = 0;
if (s1 == NULL || s2 == NULL)
return (-1);
while (*(s1 + i) != 0)
i++;
for (j = 0; j < i; j++)
{
k = *(s1 + j) - *(s2 + j);
if (k == 0)
continue;
break;
}
return (k);
}
