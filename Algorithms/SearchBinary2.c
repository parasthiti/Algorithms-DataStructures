/*
 * BinarySearch1.c
 *
 *  Created on: Nov 30, 2016
 *      Author: Paras
 *      Does not account for repeated numbers
 *      Recursive method
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int BinarySearch(int A[], int start, int end, int x){
	while (start <= end){
		int mid = start - (start-end)/2;
		if (A[mid] == x) return mid;
		else if (x < A[mid]){
			return BinarySearch(A, start, mid-1, x );
		}
		else {
			return BinarySearch(A, mid+1, end, x);
		}
	}
	return -1;
}

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	int x;
	printf("Enter a number to search:");
	scanf("%d", &x);
	int A[] = {2, 4, 5, 7, 8, 9, 10, 200, 1000};
	int n = sizeof(A) / sizeof(A[0]);
	int start = 0;
	int end = n-1;
	int index = BinarySearch(A, start, end, x);
	if (index >=0){
		printf ("%d is present at position %d.", x, index);
	}
	else{
		printf ("%d is not present.", x);
	}
}

