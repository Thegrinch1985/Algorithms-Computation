#include <iostream>
#include <algorithm>

using namespace std;

void swap(int *a, int *b) {

	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int partition(int arr[], int start, int end) {

	int pivot = arr[end];
	int i = (start - 1);

	for (int j = start; j <= end -1; j++) {
		if (arr[j] <= pivot) {
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[end]);
	return(i + 1);
}
void quicksort(int arr[], int start, int end) {
	//int i;
	if (start < end) {

		//i++;
		int partitionPi = partition(arr, start, end);

		quicksort(arr, start, partitionPi- 1);
		quicksort(arr, partitionPi +1, end);
	}
	//quicksort(arr, )

}

/* Function to print an array */
void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("n");
}

int main() {
	int arr[] = { 10, 7, 8, 9, 1, 5 ,120, 240 };
	int n = sizeof(arr) / sizeof(arr[0]);
	quicksort(arr, 0, n - 1);
	//merge(arr, 0, n-1, (n/2));
	printf("Sorted array: n");
	printArray(arr, n);
	//return 0;

	system("pause");



}