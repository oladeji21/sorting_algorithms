#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * @array: array of integers
 * @size: size of array
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
size_t i, j;
int min_val;
size_t idx;

if (size < 2)
return;
for (i = 0; i < size - 1; i++)
{
idx = i;
j = i + 1;

for (; j < size; j++)
{
if (array[j] < min_val)
{
min_val = array[j];
idx = j;
}
}

array[idx] = array[i];
if (array[i] != min_val)
{
array[i] = min_val;
print_array(array, size);
}
}
}
