/*
 * LinkedList.h
 *
 *  Created on: Jan 19, 2017
 *      Author: Paras
 */

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

#include <iostream>
#include <string.h>
#include <stack>
using namespace std;

struct Node{
	char data;
	Node* next;
};

class LinkedList {
public:
	// Default Constructor
	LinkedList();

	void insertBeg(char);
	void deleteBeg();
	void insertEnd(char);
	void deleteEnd();
	void insertN(char, int); // inserts in given position
	void deleteN(int); // deletes in nth position
	void reverse();
	void printNode();

	// Destructor
	~LinkedList();

private:
	Node* head;
	int listLength;
};

#endif /* LINKEDLIST_H_ */
