#ifndef _SORT_H_
#define _SORT_H_

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
#define UNDEF -1
#define SWAP(array, a, b) \
	{                       \
		tmp = array[a];       \
		array[a] = array[b];  \
		array[b] = tmp;       \
	}

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* Default Functions */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/* Normal Functions */
void bubble_sort(int *array, size_t size);
void swap_nodes(listint_t **list, listint_t *l, listint_t *r);
void swap_items(int *array, size_t l, size_t r);
void swap_ints(int *a, int *b);
void insertion_sort_list(listint_t **list);
void insertion_sort_list2(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
listint_t *get_tail(listint_t **list);

/* Advanced Functions */
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void max_heapify(int *array, size_t size, size_t base, size_t root);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
int get_max(int *array, int size);
void radix_counting_sort(int *array, size_t size, int sig, int *buff);
void radix_sort(int *array, size_t size);
void top_down_merge(int *array, int *array_c, size_t l, size_t m, size_t r);
void split_merge(int *array, int *array_c, size_t size, size_t l, size_t r);
void merge_sort(int *array, size_t size);
void quick_sort_range_lomuto(int *array, size_t low, size_t high, size_t size);

#endif /*_SORT_H_*/
