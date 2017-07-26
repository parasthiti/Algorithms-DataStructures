/*
 * Stack.h
 *
 *  Created on: Jan 21, 2017
 *      Author: Paras
 */

#ifndef STACK_H_
#define STACK_H_

#include <iostream>
#include <string.h>
using namespace std;

struct Node{
	char data;
	Node* next;
};

class Stack {
public:
	// Default Constructor
	Stack();

	// Functions
	void push(char);

	void pop();

	char top();

	bool isEmpty();

	// Destructor
	~Stack();

private:
	Node* topP;
};
#endif /* STACK_H_ */
