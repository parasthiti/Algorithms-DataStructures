/*
 * ArrayRotation.c
 *
 *  Created on: Nov 30, 2016
 *      Author: Paras
 *      Counts the number of time array is rotated
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int ArrayRotation(int A[], int num){
	int start = 0;
	int end = num-1;
	while (start <= end){
		if (A[start] <= A[end]) return start;
		int mid = start - (start-end)/2;
		int prev = (mid + num - 1) % num;
		int next = (mid + 1) % num;
		if (A[mid] <= A[next] && A[mid] <= A[prev]){
			return mid;
		}
		else if (A[mid] <= A[end]){
			end = mid-1;
		}
		else if (A[mid] >= A[start]){
			start = mid+1;
		}
	}
	return -1;
}

int main()
{
	int A[] = {15, 17, 2, 4, 5, 7, 8, 9, 10};
	int num = sizeof(A) / sizeof(A[0]);
	int count = ArrayRotation(A, num);
	if (count >= 0){
		printf ("Array is rotated %d times.", count);
	}
}

