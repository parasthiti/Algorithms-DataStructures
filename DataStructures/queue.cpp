/*
 * queue.cpp
 *
 *  Created on: Feb 5, 2017
 *      Author: Paras
 */

#include "queue.h"

queue::queue() {
	// TODO Auto-generated constructor stub
	frontQ = NULL;
	rearQ = NULL;
}

bool queue::isEmpty(){
	if (frontQ == NULL){
		return true;
	}
	return false;
}

void queue::enqueue(int data){
	node* tempN = new node;
	tempN->data = data;
	tempN->next = NULL;
	if (isEmpty()){
		frontQ = rearQ = tempN;
		return;
	}
	rearQ->next = tempN;
	rearQ = tempN;
}

void queue::dequeue(){
	if (isEmpty()) return;
	node* tempP = frontQ;
	if (frontQ == rearQ){
		frontQ = rearQ = NULL;
	}
	else{
		frontQ = frontQ->next;
	}
	delete tempP;
}

int queue::front(){
	if (isEmpty()){
		return 0;
	}
	else{
		return frontQ->data;
	}
}

void queue::printQ(){
	if (isEmpty()){
		cout<< "The queue is empty.";
		return;
	}
	cout << "Here is your queue: ";
	node* tempN = frontQ;
	while (tempN != NULL){
		cout << tempN->data << " ";
		tempN = tempN->next;
	}
}

//queue::~queue() {
	// TODO Auto-generated destructor stub
//}

