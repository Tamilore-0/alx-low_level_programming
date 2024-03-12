#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
/* support function */
void display(int low, int high, int *array);

#endif /* SEARCH_ALGOS_H */