/*
 * QuickSort.c
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

int Partition(int A[], int start, int end){
	int pivotIndex = (rand() % (end + 1 - start)) + start;
	swap(&A[pivotIndex], &A[end]);
	int pivot = A[end];
	int pIndex = start;
	for (int i = start; i < end ; i++){
		if (A[i] <= pivot){
			swap(&A[i], &A[pIndex]);
			pIndex++;
		}
	}
	swap(&A[pIndex], &A[end]);
	return pIndex;
}

void QuickSort(int A[] , int start, int end){
	if (start > end) return;
	int pIndex = Partition(A, start, end);
	QuickSort(A, start, pIndex-1);
	QuickSort(A, pIndex+1, end);
}

int main()
{
	int A[] = {100, 2, 8, 10, 2, 4, 1, 3, 5, 4};
	int end = (sizeof(A) / sizeof(A[0])) - 1;
	QuickSort(A, 0, end);
	for (int i = 0; i <= end; i++){
		printf ("%d ", A[i]);
	}
}
