/*
 * LinkedList.cpp
 *
 *  Created on: Jan 19, 2017
 *      Author: Paras
 */

#include "LinkedList.h"

LinkedList::LinkedList() {
	// Constructor function holds the default values
	head = NULL;
	listLength = 0;
}

void LinkedList::insertBeg(char data){
	Node* tempN = new Node;
	tempN->data = data;
	tempN->next = NULL;
	if(head != NULL) tempN->next = head;
	head = tempN;
	listLength++;
}

void LinkedList::deleteBeg(){
	if (listLength == 0){
		cout << "nError: List is empty";
		return;
	}
	Node* tempP = head;
	head = tempP->next;
	delete tempP;
	listLength--;
}

void LinkedList::insertEnd(char data){
	Node* tempN = new Node;
	tempN->data = data;
	tempN->next = NULL;
	if (head == NULL){
		head = tempN;
		listLength++;
		return;
	}
	Node* tempP = head;
	while(tempP->next != NULL){
		tempP = tempP->next;
	}
	tempP->next = tempN;
	listLength++;
}

void LinkedList::deleteEnd(){
	if (listLength == 0){
		cout << "nError: List is empty";
		return;
	}
	Node* tempP = head;
	if (listLength == 1){
		head = NULL;
		delete tempP;
		listLength--;
		return;
	}
	Node* tempP1 = tempP->next;
	while(tempP1->next != NULL){
		tempP = tempP->next;
		tempP1 = tempP1->next;
	}
	tempP->next = NULL;
	delete tempP1;

	listLength--;
}

void LinkedList::insertN(char data, int pos){
	if ((pos <=0) || (pos > listLength+1)){
		cout << "nError: Given position is out of range.";
		return;
	}
	Node* tempN = new Node;
	tempN->data = data;
	tempN->next = NULL;
	if (pos == 1){
		if (head != NULL) tempN->next = head;
		head = tempN;
		listLength++;
		return;
	}
	Node* tempP = head;
	for (int i=0; i<pos-2; i++){
		tempP= tempP->next;
	}
	tempN->next = tempP->next;
	tempP->next = tempN;
	listLength++;
}

void LinkedList::deleteN(int pos){
	if ((pos <=0) || (pos > listLength+1)){
			cout << "nError: Given position is out of range.";
			return;
	}
	Node* tempP = head;
	if (pos == 1){
		head = tempP->next;
		delete tempP;
		listLength--;
		return;
	}
	for (int i=0; i<pos-2; i++){
		tempP= tempP->next;
	}
	Node* tempP1 = tempP->next;
	tempP->next = tempP1->next;
	delete tempP1;
	listLength--;
}

void LinkedList::reverse(){
	if (head == NULL) return;
	stack<struct Node*> tempStack;
	Node* tempP = head;
	while(tempP != NULL){
		tempStack.push(tempP);
		tempP = tempP->next;
	}
	tempP = tempStack.top();
	head = tempStack.top();
	tempStack.pop();
	while (!tempStack.empty()){
		tempP->next = tempStack.top();
		tempStack.pop();
		tempP = tempP->next;
	}
	tempP->next = NULL;
}

void LinkedList::printNode(){
	Node* nodeP = head;
	cout << "List: ";
	while(nodeP != NULL){
		cout << nodeP->data;
		nodeP = nodeP->next;
	}
}

LinkedList::~LinkedList() {
	// Destructor frees the memory
	delete head;
}

