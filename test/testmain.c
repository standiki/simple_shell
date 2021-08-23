#include "Jtobyy.h"

/**
 *main - test functions
 *Return: always 0
 */
int main(void)
{
int i;
char **arr;
arr = split("CHECKING:CHECKING:CHECKING", ":");
for (i = 0; arr[i] != NULL; i++)
printf("%s\n", arr[i]);
return (0);
}
