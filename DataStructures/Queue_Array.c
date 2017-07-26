/*
 * Queue.c
 *
 *  Created on: Feb 4, 2016
 *      Author: Paras
 */

# include <stdio.h>

int Q[5];
int front = -1;
int rear = -1;
int N = sizeof(Q)/sizeof(int);

int isEmpty(){
	if (front == -1 && rear == -1) return 1;
	else return 0;
}
int isFull(){
	if ((rear+1)%N == front) return 1;
	else return 0;
}

void enqueue(int x){
	if (isFull()) return;
	else if (isEmpty()){
		front = rear = 0;
	}
	else{
		rear = (rear+1)%N;
	}
	Q[rear] = x;
}

void dequeue(){
	if (isEmpty()) return;
	else if (front == rear){
		front = rear = -1;
	}
	else{
		front = (front+1)%N;
	}
}

int frontQ(){
	return Q[front];
}

void printQ(){
	if (isEmpty()){
		printf("Queue is empty.");
		return;
	}
	printf("Here is your queue: ");
	if (front == rear){
		printf("%d", Q[front]);
	}
	else if(isFull()){
		int idx = front;
		for (int i=0; i < N; i++){
			printf("%d", Q[idx]);
			idx = (idx+1)%N;
		}
	}
	else{
		for (int i = front; i != (rear+1)%N; i=(i+1)%N){
			printf("%d", Q[i]);
		}
	}
	printf("\n");
	return;
}
int main(){
	enqueue(1);
	enqueue(2);
	enqueue(3);
	enqueue(4);
	dequeue();
	dequeue();
	enqueue(5);
	enqueue(6);
	printQ();
	printf("%d", frontQ());
	return 0;
}
