#include <string>
#include <iostream>

using namespace std;



void hanoi(int n, int p, int p2, int p3) {

	
	
	if (n == 1)
	{
		cout << "Move ring "<< n << " to Peg 2" << endl;
	}
	else
	{
		hanoi(n - 1, p, p2, p3);
		cout << "Move Ring " << n << " Peg 2" << endl;
		hanoi(n - 1, p3, p2, p);;
		
	}

}
int main() {

	int n, peg1, peg2, peg3;

	cout << "Enter Number for Objects" << endl;
	cin >> n;
	cout << "Enter Number for Peg 1" << endl;
	cin >> peg1;
	cout << "Enter Number for Peg 2" << endl;
	cin >> peg2;
	cout << "Enter Number for Peg 3" << endl;
	cin >> peg3;
	hanoi(n, peg1, peg2, peg3);

	system("pause");



}