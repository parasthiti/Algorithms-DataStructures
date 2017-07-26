/*
 * LinearSearch.c
 *
 *  Created on: Nov 30, 2016
 *      Author: Paras
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int LinearSearch(int A[], int n, int x){
	for (int i = 0; i<n; i++){
		if (A[i] == x) return i;
	}
	return -1;
}

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	int x;
	printf("Enter a number to search:");
	scanf("%d", &x);
	int A[] = {7, 2, 4, 1, 2, 3, 5, 1, 0};
	int n = sizeof(A) / sizeof(A[0]);
	int index = LinearSearch(A, n, x);
	if (index >=0){
		printf ("%d is present at position %d", x, index);
	}
}

