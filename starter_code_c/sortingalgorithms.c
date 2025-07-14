#ifndef SORTINGALGORITHMS_C
#define SORTINGALGORITHMS_C

#include <stdio.h>
#include "record.c"

/*
* You may declare additional variables and helper functions
* as needed by the sorting algorithms here.
*/

#define MAX_RECORDS 100000
Record mergeTemp[MAX_RECORDS];


// mergeSort helper - sorting subarrays
void merge(Record *arr, int p, int q, int r)
{
	int i = p;
	int j = q + 1;
	int k = p;

	while (i <= q && j <= r) {
		if (arr[i].idNumber <= arr[j].idNumber) {
			mergeTemp[k] = arr[i];
			k++;
			i++;
		} else {
			mergeTemp[k] = arr[j];
			k++;
			j++;
		}
	}

	while (i <= q) {
		mergeTemp[k] = arr[i];
		k++;
		i++;
	}

	while (j <= r ) {
		mergeTemp[k] = arr[j];
		k++;
		j++;
	}

	for (i = p; i <= r; i++) {
		arr[i] = mergeTemp[i];
	}
}

void mergeCount(Record *arr, int p, int q, int r, unsigned long* freqCount)
{
	int i = p;
	int j = q + 1;
	int k = p;
	*freqCount += 3; // assignments

	*freqCount += 1; // initial loop condition
	while (i <= q && j <= r) {
		*freqCount += 1; // loop iteration

		*freqCount += 1; // if statement
		if (arr[i].idNumber <= arr[j].idNumber) {
			mergeTemp[k] = arr[i];
			k++;
			i++;
			*freqCount += 3; // assignments
		} else {
			mergeTemp[k] = arr[j];
			k++;
			j++;
			*freqCount += 3; // assignments
		}
	}

	*freqCount += 1; // initial loop condition
	while (i <= q) {
		*freqCount += 1; // loop iteration
		
		mergeTemp[k] = arr[i];
		k++;
		i++;
		*freqCount += 3; // assignments
	}

	*freqCount += 1; // initial loop condition
	while (j <= r ) {
		*freqCount += 1; // loop iteration
		
		mergeTemp[k] = arr[j];
		k++;
		j++;
		*freqCount += 3; // assignments 
	}

	*freqCount += 1; // initial loop condition
	for (i = p; i <= r; i++) {
		*freqCount += 1; // loop iteration

		arr[i] = mergeTemp[i];
		*freqCount += 1; // assignment
	}
}

// swap helper function 
void swapRecords(Record *a, Record *b) 
{
    Record temp;

    temp = *a;
    *a = *b;
    *b = temp;
}


void insertionSort(Record *arr, int n)
{
    // TODO: Implement this sorting algorithm here.
    int i, j;
    Record key;
	
    for (i = 1; i < n; i++) {
    	key = arr[i];
    	j = i - 1;		// J is 1 index less than i
    	
    	// Compares index i with index j & swaps if conditions are met
    	while (j >= 0 && arr[j].idNumber > key.idNumber) {
    		arr[j+1] = arr[j];
    		j--;
		}
		
		arr[j+1] = key;
	}

}

void insertionSortCount(Record *arr, int n, unsigned long* freqCount)
{
    int i, j;
    Record key;
	*freqCount += 3; // count assignment
	
	*freqCount += 1; // count initial condition of loop
    for (i = 1; i < n; i++) {
		*freqCount += 1; // count loop iteration

    	key = arr[i];
    	j = i - 1;
		*freqCount += 2; // count assignment
    	
		*freqCount += 1; //count initial condition of while loop
    	while (j >= 0 && arr[j].idNumber > key.idNumber) {
    		arr[j+1] = arr[j];
    		j--;

			*freqCount += 3; // count assignments, loop iteration
		}
		
		arr[j+1] = key;
		*freqCount += 1;
	}
}

void selectionSort(Record *arr, int n)
{
    // TODO: Implement this sorting algorithm here.
	int i, j, min_index;
    Record temp;
	
    for (i = 0; i < n - 1; i++) {
		min_index = i;
		
		// Cycles through array and updates min_index if smaller number is found
		for (j = i + 1; j < n; j++) {
            if (arr[j].idNumber < arr[min_index].idNumber) {
                min_index = j;
            }
        }
        
        // Swap min_index to correct location if it has been updated
		if (min_index != i) {
			swapRecords(&arr[i], &arr[min_index]);
		}
	}

}

void selectionSortCount(Record *arr, int n, unsigned long* freqCount)
{
	int i, j, min_index;
    Record temp;
	*freqCount += 4; // assignments
	
	*freqCount += 1; // loop initial condition
    for (i = 0; i < n - 1; i++) {
		*freqCount += 1; // loop iteration

		min_index = i;
		*freqCount += 1; // assignment
		
		*freqCount += 1; // loop initial condition
		for (j = i + 1; j < n; j++) {
			*freqCount += 1; // loop iteration

			*freqCount += 1; // if statement
            if (arr[j].idNumber < arr[min_index].idNumber) {
                min_index = j;
				*freqCount += 1; // assignment
            }
        }

		*freqCount += 1; // if statement
		if (min_index != i) {
			swapRecords(&arr[i], &arr[min_index]);
			*freqCount += 4; // swap is 4 counts
		}
	}
}

void mergeSort(Record *arr, int p, int r)
{
    // TODO: Implement this sorting algorithm here.
	if (p < r) {
		int q = p + (r - p) / 2;
		mergeSort(arr, p, q);
		mergeSort(arr, q + 1, r);
		merge(arr, p, q, r);
	}
}

void mergeSortCount(Record *arr, int p, int r, unsigned long* freqCount)
{
	*freqCount += 1; // if statement
	if (p < r) {
		int q = p + (r - p) / 2;
		*freqCount += 1; // assignment
		
		mergeSortCount(arr, p, q, freqCount);
		mergeSortCount(arr, q + 1, r, freqCount);
		mergeCount(arr, p, q, r, freqCount);
	}
}

/*
* Define AT LEAST ONE more sorting algorithm here, apart from the
* ones given above. Make sure that the method accepts an array of
* record structures.
*/
void shellSort(Record *arr, int n) {
	int gap, i, j;
	Record temp;
	
	for (gap = n/2; gap > 0; gap/= 2) {
		
		for (i = gap; i < n; i++) {
			temp = arr[i];
			
			for (j = i; j >= gap && arr[j-gap].idNumber > temp.idNumber; j -= gap) {
				arr[j] = arr[j-gap];
			}
			
			arr[j] = temp;
		}
	}
}

void shellSortCount(Record *arr, int n, unsigned long* freqCount) {
	int gap, i, j;
	Record temp;
	*freqCount += 4; // assignments
	
	*freqCount += 1; // loop initial
	for (gap = n/2; gap > 0; gap/= 2) {
		*freqCount += 1; // loop iteration

		*freqCount += 1; // loop initial
		for (i = gap; i < n; i++) {
			temp = arr[i];
			*freqCount += 2; // loop iteration and assignment

			*freqCount += 1; // loop initial			
			for (j = i; j >= gap && arr[j-gap].idNumber > temp.idNumber; j -= gap) {
				arr[j] = arr[j-gap];
				*freqCount += 2; // loop iteration and assignment
			}
			
			arr[j] = temp;
			*freqCount += 1; // assignment
		}
	}
}


#endif
