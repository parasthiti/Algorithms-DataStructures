/*
 *
 *  Created on: Jan 17, 2017
 *      Author: Paras
 *      Test linked list class
 */


#include <stdio.h>
#include <string.h>
#include <iostream>
#include "LinkedList.h"
using namespace std;


int main(){
	setvbuf(stdout, NULL, _IONBF,0);
	char C[51];
	cout << "Enter a string:";
	gets(C);
	int len = strlen(C);
	LinkedList name;
	for(int i=0; i<len; i++){
		name.insertEnd(C[i]);
	}
	name.deleteBeg();
	name.insertN('x',3);
	name.deleteN(2);
	name.reverse();
	cout << "Output: ";
	name.printNode();
	return 0;
}