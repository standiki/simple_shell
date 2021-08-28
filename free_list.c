#include "Jtobyy.h"

/**
*free_list - frees a list
*@head: link to the head of the list
*Return: void
*/
void free_list(arg_list *head)
{
arg_list *lp;
lp = head;
while(head != NULL)
{
head = lp->next;
free(lp->token);
free(lp);
lp = head;
}
return;
}
