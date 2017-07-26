/*
 * Binary Search Tree
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

BSTnode* newNode(int data){
	BSTnode* newNode = new BSTnode;
	newNode->data = data;
	newNode->left = newNode->right = NULL;
	return newNode;
}

BSTnode* insert(BSTnode* trNode, int data){
	if (trNode == NULL){
		trNode = newNode(data);
	}
	else if(data <= trNode->data){
		trNode->left = insert(trNode->left, data);
	}
	else{
		trNode->right = insert(trNode->right, data);
	}
	return trNode;
}

bool search(BSTnode* trNode, int data){
	if (trNode == NULL) return false;
	else if (data == trNode->data) return true;
	else if (data < trNode->data){
		return search(trNode->left, data);
	}
	else{
		return search(trNode->right, data);
	}
}

int main(){
	BSTnode* root = NULL;
	root = insert(root,10);
	root = insert(root,20);
	root = insert(root,25);
	root = insert(root,8);
	int num;
	cout<<"Enter a number to search: ";
	cin >> num;
	if (search(root, num) == true){
		cout << "Found!";
	}
	else{
		cout << "Not Found!";
	}
	return 0;
}

