#include "_SIMPLE_SHELL_H"

/**
 * prompt - Function that print shell prompt
 *
 * Return: void
 */
void prompt(void)
{
	char name[] = "#cisfun$ ";
	int i = 0;

	while (name[i])
	{
		_putchar(name[i]);
		i++;
	}
}
