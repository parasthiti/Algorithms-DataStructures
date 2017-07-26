/*
 * MergeSort.c
 *
 *  Created on: Nov 30, 2016
 *      Author: Paras
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Merge(int Left[], int Right[], int numLeft, int numRight, int M[]){
	int l , r , k;
	l = r = k = 0;
	while (l < numLeft && r < numRight){
		if (Left[l] <= Right[r]){
			M[k] = Left[l];
			l++;
		}
		else{
			M[k] = Right[r];
			r++;
		}
		k++;
	}
	while (l < numLeft){
		M[k] = Left[l];
		l++; k++;
	}
	while (r < numRight){
		M[k] = Right[r];
		r++; k++;
	}
}

void MergeSort(int A[], int num){
	if (num < 2) return;
	int mid = num/2;
	int Left[mid];
	int Right[num-mid];
	for (int i=0; i<mid; i++){
		Left[i] = A[i];
	}
	for (int j=mid; j<num; j++){
		Right[j-mid] = A[j];
	}
	MergeSort(Left, mid);
	MergeSort(Right, (num-mid));
	Merge(Left, Right, mid, (num-mid), A);
}

int main()
{
	int A[] = {10, 2, 10, 2, 4, 1, 3, 5, 0};
	int n = sizeof(A) / sizeof(int);
	MergeSort(A, n);
	for (int i = 0; i < n; i++){
		printf ("%d ", A[i]);
	}
}
