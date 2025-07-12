#ifndef SORTINGALGORITHMS_C
#define SORTINGALGORITHMS_C

#include <stdio.h>
#include "record.c"

/*
* You may declare additional variables and helper functions
* as needed by the sorting algorithms here.
*/

void swapRecords(Record *a, Record *b) 
{
    Record temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

void merge(Record *arr, int left, int middle, int right)
{
	int i = 0, j = 0, k = 1;
	int n1 = middle - left + 1;
	int n2 = right - middle;
	int L[n1], R[n2];
	
    for (i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[middle + 1 + j];

	while (i < n1 && j < n2) 
	{
		if (L[i] >= R[j]) {
			arr[k] = L[i];
			i++;
		}
		else {
			arr[k] = R[j];
			j++;
		}
		k++;
	}
	
	while (i < n1) {
		arr[k] = L[i];
		i++;
		k++;
	}
	
	while (j < n2) {
		arr[k] = R[j];
		j++;
		k++;
	}
}

void insertionSort(Record *arr, int n)
{
    int i, j;
    Record nKey;


    for (i = 1 ; i < n ; i++)
    {
        nKey = arr[i];
        j = i - 1;


        while (j >= 0 && arr[j].idNumber > nKey.idNumber)
        {
            arr[j + 1] = arr[j]; // Shift right
            j--;
        }


        arr[j + 1] = nKey;
    }
}


void selectionSort(Record *arr, int n)
{
    int idxCurrent;
    int idxLowest;
    int i, j;

    for(i = 0; i < n; i++) {
        idxLowest = i;
        
        for(j = i+1; j < n; j++) {
            idxCurrent = j;
            if (arr[idxLowest].idNumber > arr[idxCurrent].idNumber) {
                idxLowest = idxCurrent;
            }
        }

        if (idxLowest != i) {
            swapRecords(&arr[i],&arr[idxLowest]);
        } 
    }
}

void mergeSort(Record *arr, int p, int r)
{
    // TODO: Implement this sorting algorithm here.
	int m;


	if (p < r) {
		m = p + (r - 1) / 2;
		mergeSort(arr, p, r);
		mergeSort(arr, m + 1, r);
		merge(arr, p, m, r);
	}
}


/*
* Define AT LEAST ONE more sorting algorithm here, apart from the
* ones given above. Make sure that the method accepts an array of
* record structures.
*/
void bubbleSort(Record *arr, int nSize)
{
    int i, j;

    for (i = 0 ; i < nSize ; i++)
    {
        for (j = nSize - 1 ; j >= i + 1 ; j--)
        {
            if (arr[j].idNumber < arr[j - 1].idNumber)
            {
                swapRecords(&arr[j], &arr[j - 1]);
            }
        }
    }
}











#endif
