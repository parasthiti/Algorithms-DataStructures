/*
 * Binary Search Tree
 * Find height of BST
 *
 *
 *  Created on: Jan 21, 2017
 *      Author: Paras
 */

#include <stdio.h>
#include <iostream>
using namespace std;

struct BSTnode{
	int data;
	BSTnode* left;
	BSTnode* right;
};

BSTnode* GetNewNode(int data){
	BSTnode* newNode = new BSTnode;
	newNode->data = data;
	newNode->left = newNode->right = NULL;
	return newNode;
}

BSTnode* insert(BSTnode* trNode, int data){
	if (trNode == NULL){
		trNode = GetNewNode(data);
	}
	else if(data <= trNode->data){
		trNode->left = insert(trNode->left, data);
	}
	else{
		trNode->right = insert(trNode->right, data);
	}
	return trNode;
}

int findHeight(BSTnode* root){
	if (root == NULL){
		return -1;
	}
	return max(findHeight(root->left), findHeight(root->right)) + 1;
}

int main(){
	BSTnode* root = NULL;
	root = insert(root,10);
	root = insert(root,20);
	root = insert(root,25);
	root = insert(root,8);
	root = insert(root,50);
	cout << "Height of the tree:" << findHeight(root);

	return 0;
}

