#include "sort.h"

/**
 * swap_ints - swap two integers
 * @a: The first integer to swap
 * @b: The second integer to swap
 */
void swap_ints(int *a, int *b)
{
int tmp;

tmp = *a;
*a = *b;
*b = tmp;
}

/**
 * quick_sort - Sort an array of integers
 * @array: array of integers
 * @size: size of the array
 * Description: Uses the Lomuto partition scheme
 */
void quick_sort(int *array, size_t size)
{
if (array == NULL || size < 2)
return;
}

/**
 * lomuto_partition - Order a subset of an array of integers
 * @array: array of integers
 * @size: size of the array.
 * @left: starting index of the subset
 * @right: ending index of the subset
 * Return: final partition index.
 */
int lomuto_partition(int *array, size_t size, int left, int right)
{
int *pivot, above, below;

pivot = array + right;
for (above = below = left; below < right; below++)
{
if (array[below] < *pivot)
{
if (above < below)
{
swap_ints(array + below, array + above);
print_array(array, size);
}
above++;
}
}

if (array[above] > *pivot)
{
swap_ints(array + above, pivot);
print_array(array, size);
}

return (above);
}

/**
 * lomuto_sort - the quicksort algorithm through recursion
 * @array: array of integers to sort
 * @size: size of the array.
 * @left: starting index of the array partition
 * @right: ending index of the array partition
 * Description: use the Lomuto partition scheme
 */
void lomuto_sort(int *array, size_t size, int left, int right)
{
int part;

if (right - left > 0)
{
part = lomuto_partition(array, size, left, right);
lomuto_sort(array, size, left, part - 1);
lomuto_sort(array, size, part + 1, right);
}
}
