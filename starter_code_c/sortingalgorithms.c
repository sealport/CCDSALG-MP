#ifndef SORTINGALGORITHMS_C
#define SORTINGALGORITHMS_C

#include <stdio.h>
#include "record.c"

/*
* You may declare additional variables and helper functions
* as needed by the sorting algorithms here.
*/

void swapFunction(int *nElementA, int *nElementB)
{
    int nTemp;

    nTemp = *nElementA;
    *nElementA = *nElementB;
    *nElementB = nTemp;
}

void swapRecords(Record *a, Record *b) 
{
    Record temp;

    temp = *a;
    *a = *b;
    *b = temp;
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