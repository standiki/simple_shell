#include "main.h"
#include "holberton.h"

/**
 * prompt - Function that print shell prompt
 *
 * Return: void
 */
void prompt(void)
{
char name[] = "$ ";
int i = 0;
while (name[i])
{
_putchar(name[i]);
i++;
}
}
