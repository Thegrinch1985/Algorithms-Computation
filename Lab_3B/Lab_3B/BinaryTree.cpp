#include "BinaryTree.h"
#include <iostream>
BinaryTree::BinaryTree()
{
	root = NULL;
}

BinaryTree::~BinaryTree()
{

}

void BinaryTree::add(int toadd)
{
	add(root, toadd);
}

int BinaryTree::height(TreeNode * subtreeRoot)
{
	if (subtreeRoot == NULL) {
		return -1;
	}
	else
	{
		int lDepth = height(subtreeRoot->leftPtr);
		int rDepth = height(subtreeRoot->rightPtr);

		if (lDepth > rDepth)
		{
			return(lDepth + 1);

		}
		else
		{
			return(rDepth + 1);
		}
	}
}



int BinaryTree::height()
{
	return height(root);
}

void BinaryTree::add(TreeNode * toAdd, int dataIn)
{
	if (toAdd == NULL) {
		root = new TreeNode(dataIn);
	}
	else
	{
		if (toAdd->isLeaf())
		{
			if (dataIn < toAdd->data) {
				toAdd->leftPtr = new TreeNode(dataIn);
			}
			else
			{
				toAdd->rightPtr = new TreeNode(dataIn);
			}
		}
		else
		{
			if (dataIn < toAdd->data)
			{
				if (toAdd->leftPtr != NULL)
				{
					add(toAdd->leftPtr, dataIn);
				}
				else
				{
					toAdd->leftPtr = new TreeNode(dataIn);
				}

			}
			else
			{
				if (toAdd->rightPtr != NULL)
				{
					add(toAdd->rightPtr, dataIn);
				}
				else
				{
					toAdd->rightPtr = new TreeNode(dataIn);
				}
			}
		}
	}
}





