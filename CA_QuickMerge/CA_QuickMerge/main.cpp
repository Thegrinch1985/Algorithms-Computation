#include <iostream>
using namespace std;



template<class T>
void swap(T *a, T *b) {

	T temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

template<class T>
T partition(T arr[], int low, int high) {
	T pivot = arr[high];
	int i = low - 1;

	for (int j = low; j <= high - 1; j++) {

		if (arr[j] <= pivot)
		{
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	return i + 1;

}

template<class T>
void quicksort(T arr[], int low, int high) {

	if (low < high)
	{
		T pi = partition(arr, low, high);


		quicksort(arr, low, pi - 1);
		quicksort(arr, pi + 1, high);

	}
}
//template<class T>
void merge(int arr[], int low, int high) {
	int size = (high - low ) + 1;
	int *b = new int[size]();
	int k = 0;
	
	int i = low;
	int medium = ( low + high )/ 2;
	int j = medium + 1;

	while (k < size)
	{
		if ((i <= medium) && (arr[i] < arr[j]))
		{
			b[k++] = arr[i++];
		}
		else
		{
			b[k++] = arr[j++];
		}

	}
	for (k = 0; k < size; k++) {
		arr[low + k] = b[k];
	}
	delete[]b;
}
//template<class T>
void mergesort(int arr[], int low, int high) {

	int medium;

	if (low >= high) 
	{
		return;
	}
	
	
		medium = (low + high) / 2;
		mergesort(arr, low, medium);
		mergesort(arr, medium + 1, high);
		merge(arr, low, high);
	


}
template<class T>
void print(T arr[], int size) {

	for (int  i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}
int main() {

	int arr []= { 23,56,56,7,8,67,564,2,12,23 };
	int size = 10;
	int n = sizeof(arr) / sizeof(arr[0]);
	//int const arraySize = 10;
	//int array1[arraySize] = { 2,4,3,5,7,2,6,3,6,10 };
	//mergesort(array1, 0, arraySize - 1);
	//quicksort(arr, 0, n-1);
	//print(arr, n);
	
	//int arr1[] = { 23,56,56,7,8,67,564,2,12,23,78,9,8,9,8,7,6,5,4,2424,24,2,23 };
	//int n1 = sizeof(arr1) / sizeof(arr1[0]);
	print(arr, n - 1);
	cout << "Pre-Merge" << endl;
	//int n1 = sizeof(arr1) / sizeof(arr1[0]);
	mergesort(arr, 0, n-1);
	print(arr, n-1);
	system("pause");
}