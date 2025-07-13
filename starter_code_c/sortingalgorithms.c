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
			temp = arr[i];
        	arr[i] = arr[min_index];
        	arr[min_index] = temp;
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

/*
* Define AT LEAST ONE more sorting algorithm here, apart from the
* ones given above. Make sure that the method accepts an array of
* record structures.
*/
void bubbleSort(Record *arr, int n)
{
    int i, j;

    for (i = 0 ; i < n ; i++)
    {
        for (j = n - 1 ; j >= i + 1 ; j--)
        {
            if (arr[j].idNumber < arr[j - 1].idNumber)
            {
                swapRecords(&arr[j], &arr[j - 1]);
            }
        }
    }
}









#endif
