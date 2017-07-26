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

void BubbleSort(int A[], int n){
	for (int i = 0; i < n-1; i++){
		int flag = 0;
		for (int j = 0; j < n-i-1; j++){
			if(A[j] > A[j+1]){
				swap(&A[j], &A[j+1]);
				flag = 1;
			}
		}
		if (flag == 0) break;
	}
}

int main()
{
	int A[] = {100, 7, 2, 4, 1, 2, 3, 5, 1, 0};
	int n = sizeof(A) / sizeof(int);
	BubbleSort(A, n);
	for (int i = 0; i < n; i++){
		printf ("%d ", A[i]);
	}
}
