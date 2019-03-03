#pragma once
#ifndef treeNode_h
#define treeNode_h

class TreeNode
{
	friend class BinaryTree;
public:
	TreeNode();
	TreeNode(int data);
	~TreeNode();
	int isLeaf();


private:

	TreeNode *leftPtr;
	TreeNode *rightPtr;
	int data;

};


#endif // !treeNode_h
