#ifndef _SEARCH_ALGOS_H__
#define _SEARCH_ALGOS_H__

#include <stdio.h>
#include <stdlib.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void _print(int *array, size_t lower, size_t upper);

#endif
