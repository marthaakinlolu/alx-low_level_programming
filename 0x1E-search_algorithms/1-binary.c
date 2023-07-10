#include "search_algos.h"

/**
 * recursive_search - searches for a value in an array of
 * integers using the Binary search algorithm
 *
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int binary_search(int *array, size_t size, int value) {
  // Check if the array is NULL
  if (array == NULL) {
    return -1;
  }

  // Initialize the start and end indexes
  size_t start = 0;
  size_t end = size - 1;

  // Loop until the start index is greater than or equal to the end index
  while (start <= end) {
    // Print the array being searched
    printf("Searching in array: %d\n", array[start:end + 1]);

    // Calculate the middle index
    size_t mid = (start + end) / 2;

    // If the value is found, return the index
    if (array[mid] == value) {
      return mid;
    }

    // If the value is less than the middle value, search the left subarray
    else if (value < array[mid]) {
      end = mid - 1;
    }

    // If the value is greater than the middle value, search the right subarray
    else {
      start = mid + 1;
    }
  }

  // The value was not found
  return -1;
}
