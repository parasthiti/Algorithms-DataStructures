/*
 *
 *  Created on: Jan 21, 2017
 *      Author: Paras
 */

#include <stdio.h>
#include <iostream>
#include "queue.h"

using namespace std;

int main(){
	queue q;
	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3);
	q.enqueue(4);
	q.dequeue();
	q.dequeue();
	q.enqueue(5);
	q.enqueue(6);
	q.printQ();
	cout << "\nFront of the queue: " << q.front();

	return 0;
}

