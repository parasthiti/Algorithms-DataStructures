/*
 * Binary Search Tree
 * Find Minimum value in BST
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

int findMin(BSTnode* root){
	if (root == NULL){
		cout << "Tree is empty!\n";
		return -1;
	}
	while (root->left != NULL){
		root = root->left;
	}
	return root->data;
}

int main(){
	BSTnode* root = NULL;
	root = insert(root,10);
	root = insert(root,20);
	root = insert(root,25);
	root = insert(root,8);
	if (findMin(root) != -1){
		cout << "Minimum value:" << findMin(root);
	}
	return 0;
}

