/*
 * LinkedList.c
 *
 *  Created on: Nov 30, 2016
 *      Author: Paras
 *      Insert in the nth position of linked list
 *      Reverse linked list using Recursion
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Node{
	int data;
	struct Node* next;
};

struct Node* head;

void Insert(int data, int pos){
	struct Node* temp1 = (struct Node*)malloc(sizeof(struct Node));
	temp1->data = data;
	//temp1->next = NULL;
	if (pos == 1){
		temp1->next = head;
		head = temp1;
		return;
	}
	struct Node* temp2 = head;
	for (int i = 0; i<pos-2; i++){ \
		temp2 = temp2->next;
	}
	temp1->next = temp2->next;
	temp2->next = temp1;
}

void Reverse(struct Node* nodeP1){
	if (nodeP1->next == NULL){
		head = nodeP1;
		return;
	}
	Reverse(nodeP1->next);
	struct Node* nodeP2 = nodeP1->next;
	nodeP2->next = nodeP1;
	nodeP1->next = NULL;

}

void PrintNode(struct Node* headPointer){
	while(headPointer != NULL){
		printf("%d ", headPointer->data);
		headPointer = headPointer->next;
	}
}

int main()
{
	head = NULL;
	Insert(2,1);
	Insert(3,2);
	Insert(4,3);
	Insert(6,4);
	Insert(8,5);
	Insert(7,6);
	Reverse(head);
	printf("Here is your reversed list: ");
	PrintNode(head);
}

