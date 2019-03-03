#include "BinaryTree.h"
#include "TreeNode.h"
#include <iostream>
using namespace std;
int main() {


	BinaryTree tree;
	tree.add(1);
	tree.add(34);
	tree.add(54);
	tree.add(23);
	tree.add(2);
	tree.add(3);
	tree.add(4);



	cout << "The height of the tree is: " << tree.height() << endl;

	system("pause");
	//cout << t1;


}