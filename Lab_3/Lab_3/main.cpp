#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int merge(int arraySortedInTwoHalves[], int start, int length) {

	int i, j, k;
	int a = (length / 2 ) + 1;
	const int  medium = a;
	int* point = new int;
	point = new int[medium];

	for(int i = 0; i < (length/2);i++){
		int temp_one[i] = arraySortedInTwoHalves[length + i];
	}
	
	int temp_two[point];

	for (i = 0; i < 4; i++) {
		temp_one[i] = arraySortedInTwoHalves[Length - 1];
	}

	for (j = 0; j < 4; j++) {
		temp_two[i] = arraySortedInTwoHalves[1 + j];
	}

	if (length > 1) {
	
		//mergeSort()
	}
	return 0;
}

int mergeSort(int arrayToSort[], int startIndex, int lengthToSrt) {

	return 0;
}

int main() {

	int array[] = { 12,32,45,53,25,67,85,89 };
	int start, length;
	cout << "Enter startIndex " << endl;
	cin >> start;
	cout << "Enter Length " << endl;
	cin >> length;

	merge(array, start, length&);




}