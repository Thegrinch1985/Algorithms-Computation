#pragma once
#ifndef binaryTree_h
#define binaryTree_h
#include "TreeNode.h"
class BinaryTree
{
public:
	BinaryTree();
	~BinaryTree();
	void add(int);
	int height();


private:
	//oid add(TreeNode *toadd, int dataIn);
	int height(TreeNode *subtreeRoot);
	void add(TreeNode *toAdd, int dataIn);
	TreeNode *root;

};
#endif // !binaryTree_h
