/*
 * LinkedList.c
 *
 *  Created on: Nov 30, 2016
 *      Author: Paras
 *      Insert in the nth position of linked list
 *      Reverse the linked list without recursion
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Node{
	int data;
	struct Node* next;
};

void Insert(struct Node** head, int data, int pos){
	struct Node* temp1 = (struct Node*)malloc(sizeof(struct Node));
	temp1->data = data;
	//temp1->next = NULL;
	if (pos == 1){
		temp1->next = *head;
		*head = temp1;
		return;
	}
	struct Node* temp2 = *head;
	for (int i = 0; i<pos-2; i++){ \
		temp2 = temp2->next;
	}
	temp1->next = temp2->next;
	temp2->next = temp1;
}

void Reverse (struct Node **head){
	struct Node *current, *prev, *next;
	current = *head;
	prev = NULL;
	while(current != NULL){
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
}

void Printnode(struct Node* head){
	printf("Here is your list: ");
	while (head!= NULL){
		printf("%d ", head->data);
		head = head->next;
	}
	printf("\n");
}

int main()
{
	struct Node* head = NULL;
	Insert(&head, 2,1);
	Insert(&head, 3,2);
	Insert(&head, 4,3);
	Insert(&head, 6,4);
	Insert(&head, 8,5);
	Insert(&head, 7,6);
	Reverse(&head);
	Printnode(head);
}

