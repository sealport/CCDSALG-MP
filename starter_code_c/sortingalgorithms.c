#ifndef SORTINGALGORITHMS_C
#define SORTINGALGORITHMS_C

#include <stdio.h>
#include "record.c"

/*
* You may declare additional variables and helper functions
* as needed by the sorting algorithms here.
*/






void insertionSort(Record *arr, int n)
{
    // TODO: Implement this sorting algorithm here.






}

void swap(Record *a, Record *b) 
{
    Record temp;

    temp = *a;
    *a = *b;
    *b = temp;
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
            swap(&arr[i],&arr[idxLowest]);
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











#endif