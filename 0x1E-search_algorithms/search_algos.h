#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
/* support function for binary search */
void binary_display(int low, int high, int *array);
/* support function for exponential search */
void exponential_display(int low, int high, int *array);
/* support function for advanced binary search */
void advanced_binary_display(int low, int high, int *array);
int binarySearch(int array[], int low, int high, int value);

#endif /* SEARCH_ALGOS_H */
