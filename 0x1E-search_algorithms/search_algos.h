#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H
#include <stdio.h>
#include <stddef.h>

int linear_search(int *array, size_t size, int value);
int search_recursive(int *array, int value, size_t low, size_t high);
void print_array(int *array, size_t low, size_t high);
int binary_search(int *array, size_t size, int value);
#endif
