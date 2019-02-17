#include <string>
#include <iomanip>
#include <iostream>

using namespace std;

template<typename T>
T swap(T  a, int b) {

	//return sum;
}
template<class T>
T sumArray(T *ary, int sz) {
	T sum = 0;
	for (int i = 0; i < sz; i++)
		sum += ary[i];
	return sum;

}
template<class T1, class T2>
void spaceOutput(T1 x, T2 y) {

	cout << x << ' ' << y << std::endl;
}
template<class T1, class T2>
void swapNum(T1 x, T2 y) {
	//T ans;
	//ans = y;
	//y = x;
	//x = ans;


	cout << x << ' ' << y << endl;

}
//Question 1
template<class T>
void swapNum1(T x, int y) {
	int ans;
	ans = y;
	y = x;
	x = ans;


	std::cout << x << ' ' << y << endl;
}
//Question 1 A
template<class T>
void swapNum2(T &x, int &y) {
	int ans;
	ans = y;
	y = x;
	x = ans;


	cout << x << ' ' << y << endl;
}
//Question 1 B
template<class T>
void swapNum3(T *x, int *y) {
	int ans;
	ans = y;
	y = x;
	x = ans;


	cout << x << ' ' << y << endl;
}
template<class T>
void swapValues4(T* x, T* y)
{
	T temp;
	temp = *x;
	x = y;
	y = temp;

	cout << x << y << endl;
}
template<class T>
void swapValues5(T x, T y)
{
	T temp;
	temp = x;
	x = y;
	y = temp;

	cout << x << y << endl;
}
template<class WhatKind1>
void multiples(WhatKind1 sum, WhatKind1 x, int n) {
	WhatKind1 output = 0;
	for (int i = sum; i < n; i++) {
		output += x * n;
		cout << " output in for loop is : " << output << endl;
	}

	sum = sum + output;
	std::cout << "sum = " << sum << std::endl;
}
//template<class TypeParameter>
template<class T1, class T2>
T1 init(T1 num1, T1 num2, T2& start) {
	start = 1;
	T1 output = num1 + num2;
	cout << "Output " << output << "And start is " << start << endl;

	return output;
}

int partition(int arr[], int low, int high)
{
	int pivot = arr[high];    // pivot 
	int i = (low - 1);  // Index of smaller element 

	for (int j = low; j <= high - 1; j++)
	{
		// If current element is smaller than or 
		// equal to pivot 
		if (arr[j] <= pivot)
		{
			i++;    // increment index of smaller element 
		//swap(&arr[i], &arr[j]);
			swapValues5(&arr[i], &arr[j]);
		}
	}
	//swap(&arr[i + 1], &arr[high]);
	swapValues5(&arr[i+1], &arr[high]);
	return (i + 1);
}
void swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
/* The main function that implements QuickSort
 arr[] --> Array to be sorted,
  low  --> Starting index,
  high  --> Ending index */
void quickSort(int arr[], int low, int high)
{
	if (low < high)
	{
		/* pi is partitioning index, arr[p] is now
		   at right place */
		int pi = partition(arr, low, high);

		// Separately sort elements before 
		// partition and after partition 
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}
/*template<class T>
void quicksort(int arr[], int low, int high) {
	if (low < high)
	{
		int pi = partition_1(arr, low, high);
		quicksort(arr, low, pi - 1);
		quicksort(arr, pi + 1, high);

	
	}
}*/
/*template<typename T>
int partition_1(int array, int start, int end)
{
	int value = 0;
	int pivot = array[end];
	int i = (start - 1);
	for (int j = start; j <= end  ; j++) {
	
		
		if (array[j] <= pivot)
		{
			i++;
			swapValues4(array[i], array[j]);
		}
		swapValues4(&array[i + 1], &array[end]);
	}
	value = i + 1;
	return value;
}
//Pass by reference(C++ only) Pass - by - reference means to pass the reference 
//of an argument in the calling function to the corresponding formal parameter of 
//the called function.The called function can modify the value of the argument by 
//using its reference passed In  &

//Pass by address is a pointer 

*/
int main() {

	//Question  1 
	//float a;
	//int b;
	//cout << "Please enter A " << endl;
	//cin >> a;
	//cout << "Please enter B " << endl;
	//cin >> b;
	//swapNum1(a, b);

	//Question  1 a
	//swapNum2(a, b);
	//Question 1 b
	//swapNum3(&a, &b);


	//int arr[] = { 25,34,35,34 };
//double arr_d[] = { 23.5,45.5,60.0,97.0,5.5 };
	//cout << "Output : int " << sumArray(arr, 4) << endl;
	//cout << "Output : double " << sumArray(arr_d, 5) << endl;

	//spaceOutput(10, "hi");
	//spaceOutput(0.23, 10l);
	//swap(a, b);


	//Question 2
	/*
	int sum, x;
	int n;
	//multiples(sum, x, n);
	cout << "Enter the three numbers " << endl;
	cout << "Sum : " << endl;
	cin >> sum;
	cout << "X : " << endl;
	cin >> x;
	cout << "N : " << endl;
	cin >> n;



	multiples(sum, x, n);
	
	//Question 3
	int a, b;
	double start;
	cout << "Enter three Numbers " << endl;
	cout << "A : " << endl;
	cin >> a;
	cout << "B : " << endl;
	cin >> b;
	cout << "Start : " << endl;
	cin >> start;

	init(a, b, start);

	/*

	int i = 1;
	int i2 = 2;

	swapValues4(i, i2);
	//cout >> swapValues4(i, i2) << endl;
	char abc = 'a';
	char abc2 = 'b';

	swapValues4(abc, abc2);

	int opo = 2;
	int pop = 3;
	double bill = 2.2;
	init(opo, pop, bill);
	*/
	//Question  4
	int array123[] = { 123, 906,86,45,34,54,1,2,23,34,32,34,345,65,456,676,78 };
	int start = 1;
	int end = 10;
	quickSort(array123, start, end);
	//quicksort(array123, start, end);
	system("pause");



}