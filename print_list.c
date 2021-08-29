#include "main.h"

/**
 *print_list - prints the element of a list
 *@h: list
 *Return: no of elements in list
 */
int print_list(arg_list *h)
{
int i;
const arg_list *p;
i = 0;
if (h == NULL)
return (0);
p = h;
while (p != NULL)
{
if (p->token == NULL)
printf("[0] (nil)\n");
else
printf("%s\n",  p->token);
i++;
p = p->next;
}
return (i);
}
