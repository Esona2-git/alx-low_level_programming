#include <stdio.h>
#include "lists.h"

/*
* print_list - prints all the elements of a list_t list
* @h: points to list_t
*
* Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
size_t n = 0;
const list_t *current = h;

while (current != NULL)
{
if (current->str != NULL)

printf("%s\n", current->str);
else
printf("[0] (nil)\n");

n++;
current = current->next;
}

return (n);
}
