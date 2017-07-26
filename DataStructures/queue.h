/*
 * queue.h
 *
 *  Created on: Feb 5, 2017
 *      Author: Paras
 */

#ifndef QUEUE_H_
#define QUEUE_H_

#include <iostream>
using namespace std;

class node{
public:
	int data;
	node* next;
};

class queue {
public:
	queue();

	bool isEmpty();

	void enqueue(int);

	void dequeue();

	int front();

	void printQ();

	//~queue();

private:
	node* frontQ;
	node* rearQ;
};


#endif /* QUEUE_H_ */
