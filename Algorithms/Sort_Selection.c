/*
 * BubbleSort.c
 *
 *  Created on: Nov 30, 2016
 *      Author: Paras
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void swap(int *A, int *B){
	int temp = *A;
	*A = *B;
	*B = temp;
}

void SelectionSort(int A[], int n){
	for (int i = 0; i < n-1; i++){
		int imin = i;
		for (int j = i+1; j < n; j++){
			if(A[j] < A[imin]){
				imin = j;
			}
		}
		swap(&A[i], &A[imin]);
	}
}

int main()
{
	int A[] = {7, 2, 4, 1, 2, 3, 5, 1, 0};
	int n = sizeof(A) / sizeof(int);
	SelectionSort(A, n);
	for (int i = 0; i < n; i++){
		printf ("%d ", A[i]);
	}
}
