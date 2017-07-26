/*
 * BinarySearch3.c
 *
 *  Created on: Nov 30, 2016
 *      Author: Paras
 *      Count of total number of times number is persent
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int BinarySearch(int A[], int start, int end, int x, int SearchLeft){
	int index = -1;
	while (start <= end){
		int mid = start - (start-end)/2;
		if (A[mid] == x){
			index = mid;
			if (SearchLeft){
				end = mid-1;
			}
			else{
				start = mid+1;
			}
		}
		else if (x < A[mid]){
			end = mid-1;
		}
		else {
			start = mid+1;
		}
	}
	return index;
}

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	int x;
	printf("Enter a number to search:");
	scanf("%d", &x);
	int A[] = {2, 4, 5, 5, 5, 7, 8, 9, 10, 200, 1000};
	int n = sizeof(A) / sizeof(A[0]);
	int start = 0;
	int end = n-1;
	int FirstIndex = BinarySearch(A, start, end, x, 1);
	if (FirstIndex == - 1){
		printf ("%d is not present.", x);
	}
	else {
		int LastIndex = BinarySearch(A, start, end, x, 0);
		int count = LastIndex - FirstIndex + 1;
		printf ("%d is present %d times.", x, count);
	}
}

