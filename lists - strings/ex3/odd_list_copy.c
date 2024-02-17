/* 3 - Write a function that returns the elements on odd positions in a list.
*	 Done by: Leonardo Farias dos Santos
*/

#include <stdlib.h>
#include <stdio.h>

int *odd_picker(int *number_list, unsigned int size) {
	if (!number_list)
		return (NULL);

	int *odd_list = malloc(sizeof(int) * ((size + 1) / 2));

	if (!odd_list)
		return (NULL);

	for (int i = 1, j = 0; i < size; i += 2, j++) {
		odd_list[j] = number_list[i];	
	}

	return (odd_list);
}

// driver code
void print_results(int *original, int *odds, unsigned list_size) {
	printf("original -> ");
	for (int i = 0; i < list_size; i++) {
		printf("%d ", original[i]);
	}

	printf("\nodd index -> ");
	for (int j = 0; j < ((list_size + 1) / 2); j++) {
		printf("%d ", odds[j]);
	}

	printf("\n\n");
}

int main(void) {
	int numbers[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
	unsigned int size = 14;

	int *odd_list = odd_picker(numbers, size);
	print_results(numbers, odd_list, size);
	free(odd_list);

	int n2[] = {0, 2, 4, 6, 8, 9};
	size = 6;
	odd_list = odd_picker(n2, size);
	print_results(n2, odd_list, size);
	free(odd_list);

	int n3[] = {};
	size = 0;
	odd_list = odd_picker(n3, size);
	print_results(n3, odd_list, size);
	free(odd_list);

	int n4[] = {-42, 42};
	size = 2;
	odd_list = odd_picker(n4, size);
	print_results(n4, odd_list, size);
	free(odd_list);

	int n5[] = {1, 2, 3, 4};
	size = 4;
	odd_list = odd_picker(n5, size);
	print_results(n5, odd_list, size);
	free(odd_list);
}
