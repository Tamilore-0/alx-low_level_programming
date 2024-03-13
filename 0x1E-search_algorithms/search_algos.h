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

/*for task 105 */
/**
* struct listint_s - singly linked list
*
* @n: Integer
* @index: Index of the node in the list
* @next: Pointer to the next node
*
* Description: singly linked list node structure
*/
typedef struct listint_s
{
	int n;

	size_t index;
	struct listint_s *next;
} listint_t;

listint_t *jump_list(listint_t *list, size_t size, int value);
listint_t *create_list(int *array, size_t size);
void free_list(listint_t *list);
void print_list(const listint_t *list);

/* for task 106 */
/**
* struct skiplist_s - Singly linked list with an express lane
*
* @n: Integer
* @index: Index of the node in the list
* @next: Pointer to the next node
* @express: Pointer to the next node in the express lane
*
* Description: singly linked list node structure with an express lane
*/
typedef struct skiplist_s
{
	int n;

	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;

skiplist_t *linear_skip(skiplist_t *list, int value);
void print_skiplist(const skiplist_t *list);
void free_skiplist(skiplist_t *list);
skiplist_t *create_skiplist(int *array, size_t size);
void init_express(skiplist_t *list, size_t size);



#endif /* SEARCH_ALGOS_H */
