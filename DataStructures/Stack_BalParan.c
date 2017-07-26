/*
 * Balanced Parenthesis.h
 *
 *  Created on: Jan 21, 2017
 *      Author: Paras
 */

#include <stdio.h>
#include <string.h>
#include <iostream>
#include "LinkedList.h"
#include <stack>

using namespace std;

bool parPair(char, char);
bool checkPar(string);

int main(){
	setvbuf(stdout, NULL, _IONBF,0);
	string testExp;
	cout << "Test parenthesis:";
	cin >> testExp;
	if (checkPar(testExp)){
		cout << "Parenthesis is balanced.";
	}
	else{
		cout << "Parenthesis is not balance";
	}
	return 0;
}

bool parPair(char open, char close){
	if ((open == '[' && close == ']') || (open == '{' && close == '}')
		|| (open == '(' && close == ')')){
		return true;
	}
	else{
		return false;
	}
}

bool checkPar(string testExp){
	stack<char> parCheck;
	for(unsigned int i=0; i<testExp.length(); i++){
		if (testExp[i] == '[' || testExp[i] == '{' || testExp[i] == '('){
			parCheck.push(testExp[i]);
		}
		else if (testExp[i] == ']' || testExp[i] == '}' || testExp[i] == ')'){
			if (parCheck.empty() || !parPair(parCheck.top(), testExp[i])){
				return false;
			}
			else{
				parCheck.pop();
			}
		}
	}
	if(parCheck.empty()){
		return true;
	}
	else{
		return false;
	}
}
