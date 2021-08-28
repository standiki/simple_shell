#include "main.h"
#include "holberton.h"

/**
 * _strdup - duplicates the string pointed to by src including terminating
 *null byte(\0)
 *@dest: destination
 *@src: source
 *Return: pointer to destination
 */
char *_strdup(char *src)
{
int i;
int j;
char tmp;
char *dest;
i = 0;
j = 0;
while (*(src + j) != 0)
j++;
dest = malloc(sizeof(char) * (j + 1));
while (*(src + i) != 0)
{
tmp = *(src + i);
*(dest + i) = tmp;
i++;
}
*(dest + i) = '\0';
return (dest);
}
