/*
 * Binary Search Tree
 * Find Maximum value in BST using Recursion
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

int findMax(BSTnode* root){
	if (root == NULL){
		cout << "Tree is empty!\n";
		return -1;
	}
	else if (root->right == NULL){
		return root->data;
	}
	return findMax(root->right);
}

int main(){
	BSTnode* root = NULL;
	root = insert(root,10);
	root = insert(root,20);
	root = insert(root,25);
	root = insert(root,8);
	root = insert(root,50);
	if (findMax(root) != -1){
		cout << "Maximum value:" << findMax(root);
	}
	return 0;
}

