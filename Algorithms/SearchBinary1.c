/*
 * BinarySearch1.c
 *
 *  Created on: Nov 30, 2016
 *      Author: Paras
 *      Does not account for repeated numbers
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int BinarySearch(int A[], int n, int x){
	int start = 0;
	int end = n-1;
	while (start <= end){
		int mid = start - (start-end)/2;
		if (A[mid] == x) return mid;
		else if (A[mid] < x){
			start = mid+1;
		}
		else {
			end = mid-1;
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
	int A[] = {2, 4, 5, 7, 8, 9, 10, 200};
	int n = sizeof(A) / sizeof(A[0]);
	int index = BinarySearch(A, n, x);
	if (index >=0){
		printf ("%d is present at position %d.", x, index);
	}
	else{
		printf ("%d is not present.", x);
	}
}

