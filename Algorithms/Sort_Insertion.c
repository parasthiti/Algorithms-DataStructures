/*
 * InsertionSort.c
 *
 *  Created on: Nov 30, 2016
 *      Author: Paras
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void InsertionSort(int A[], int n){
	for (int i = 1; i < n; i++){
		int value = A[i];
		int hole = i;
		while(hole > 0 && A[hole-1] > value){
			A[hole] = A[hole-1];
			hole--;
		}
		A[hole] = value;
	}
}

int main()
{
	int A[] = {7, 2, 4, 1, 2, 3, 5, 1, 0};
	int n = sizeof(A) / sizeof(int);
	InsertionSort(A, n);
	for (int i = 0; i < n; i++){
		printf ("%d ", A[i]);
	}
}
