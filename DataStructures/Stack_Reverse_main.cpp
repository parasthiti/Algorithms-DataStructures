/*
 * Stack.c
 *
 *  Created on: Jan 17, 2017
 *      Author: Paras
 *      Reverse a string using stacks
 */


#include "LinkedList.h"
#include "Stack.h"
#include<stdio.h>

#include <string.h>
using namespace std;

void Reverse(char *C, int len){
	Stack name;
	for(int i=0; i<len; i++){
		name.push(C[i]);
	}
	for(int i=0; i<len; i++){
		C[i] = name.top();
		name.pop();
	}
}

int main(){
	setvbuf(stdout, NULL, _IONBF,0);
	char C[51];
	cout << "Enter a string:";
	gets(C);
	int len = strlen(C);
	Reverse(C, len);
	cout << "Output: " << C;
	return 0;
}
