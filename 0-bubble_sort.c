#include "sort.h"

/**
 * bubble_sort - an array of integers in ascending order to sort
 * @array: an array of integers
 * @size: the size of the array
 * Description: print the array after each swap
 */
void bubble_sort(int *array, size_t size)
{
size_t i, len = size;
bool bubbly = false;

if (array == NULL || size < 2)
return;

while (bubbly == false)
{
bubbly = true;
for (i = 0; i < len - 1; i++)
{
if (array[i] > array[i + 1])
{
swap_ints(array + i, array + i + 1);
print_array(array, size);
bubbly = false;
}
}
len--;
}
}
