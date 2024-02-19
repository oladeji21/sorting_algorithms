#include "sort.h"
#include <stdio.h>

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 * @list: a pointer to the head of a doubly-linked list of integers
 * Description: Prints the list after each swap
 */
void insertion_sort_list(listint_t **list)
{
listint_t *temp, *node, *ptr;

if (list == NULL || *list == NULL || (*list)->next == NULL)
return;

temp = (*list)->next;

while (temp != NULL)
{
node = temp;
temp = temp->next;

while (node->prev != NULL && node->n < node->prev->n)
{
ptr = node->prev;

ptr->next = node->next;
if (node->next != NULL)
node->next->prev = ptr;

node->prev = ptr->prev;
node->next = ptr;

if (ptr->prev != NULL)
ptr->prev->next = node;

ptr->prev = node;

if (node->prev == NULL)
*list = node;

print_list(*list);
}
}
}
