/*
 * Stack.cpp
 *
 *  Created on: Jan 21, 2017
 *      Author: Paras
 */

#include "Stack.h"

Stack::Stack() {
	// Constructor function holds the default values
	topP = NULL;
}

void Stack::push(char data){
	Node* tempN = new Node;
	tempN->data = data;
	tempN->next = NULL;
	if(topP != NULL) tempN->next = topP;
	topP = tempN;
}

void Stack::pop(){
	Node* tempP = topP;
	if(topP == NULL) return;
	topP = tempP->next;
	delete tempP;
}

char Stack::top(){
	return topP->data;
}

bool Stack::isEmpty(){
	if (topP == NULL) return true;
	return false;
}

Stack::~Stack() {
	// TODO Auto-generated destructor stub
	delete topP;
}

