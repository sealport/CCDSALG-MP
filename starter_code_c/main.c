#include "record.c"
#include "sortingalgorithms.c"
#include "filereader.c"
#include "timer.c"
#include <stdio.h>
#include <string.h>
#include <stdlib.h> // new (added for malloc)

int main()
{
    Record *records = malloc(100000 * sizeof(Record));

    long startTime, endTime;
    
    // Sizes in order: 100000, 100, 25000, 50000, 75000, 100000
    long executionTimes[7];
    unsigned long freqCount[7];
    
    int input;
    printf("Options:\n");
    printf("Execution times: \n");
    printf("1 - Insertion Sort\n");
    printf("2 - Selection Sort\n");
    printf("3 - Merge Sort\n");
    printf("4 - Bubble Sort\n");
    printf("Verify contents of files after sorting using random100.txt: \n");
    printf("5 - Verify Insertion Sort\n");
    printf("6 - Verify Selection Sort\n");
    printf("7 - Verify Merge Sort\n");
    printf("8 - Verify Bubble Sort\n");
    printf("Frequency Count of Sorting Algorithms:\n");
    printf("9 -  Count Insertion Sort\n");
    printf("10 - Count Selection Sort\n");
    printf("11 - Count Merge Sort\n");
    printf("12 - Count Bubble Sort\n"); 

    printf("Choice: ");
    scanf("%d", &input);

    switch (input)
    {
    case 1: // Insertion sort
        printf("Processing almostsorted.txt...\n");
    
        // Get execution time for almostsorted.txt
        readFile(records, "data/almostsorted.txt");
        startTime = currentTimeMillis();
        insertionSort(records, 100000);
        endTime = currentTimeMillis();
        executionTimes[0] = endTime - startTime;

        printf("Processing random100.txt...\n");

        // Get execution time for random100.txt
        readFile(records, "data/random100.txt");
        startTime = currentTimeMillis();
        insertionSort(records, 100);
        endTime = currentTimeMillis();
        executionTimes[1] = endTime - startTime;

        printf("Processing random25000.txt...\n");

        // Get execution time for random25000.txt
        readFile(records, "data/random25000.txt");
        startTime = currentTimeMillis();
        insertionSort(records, 25000);
        endTime = currentTimeMillis();
        executionTimes[2] = endTime - startTime;

        printf("Processing random50000.txt...\n");

        // Get execution time for random50000.txt
        readFile(records, "data/random50000.txt");
        startTime = currentTimeMillis();
        insertionSort(records, 50000);
        endTime = currentTimeMillis();
        executionTimes[3] = endTime - startTime;

        printf("Processing random75000.txt...\n");

        // Get execution time for random75000.txt
        readFile(records, "data/random75000.txt");
        startTime = currentTimeMillis();
        insertionSort(records, 75000);
        endTime = currentTimeMillis();
        executionTimes[4] = endTime - startTime;

        printf("Processing random100000.txt...\n");

        // Get execution time for random100000.txt
        readFile(records, "data/random100000.txt");
        startTime = currentTimeMillis();
        insertionSort(records, 100000);
        endTime = currentTimeMillis();
        executionTimes[5] = endTime - startTime;

        printf("Processing totallyreversed.txt...\n");

        // Get execution time for totallyreversed.txt
        readFile(records, "data/totallyreversed.txt");
        startTime = currentTimeMillis();
        insertionSort(records, 100000);
        endTime = currentTimeMillis();
        executionTimes[6] = endTime - startTime;
        break;

    case 2: // Selection sort
        printf("Processing almostsorted.txt...\n");

        // Get execution time for almostsorted.txt
        readFile(records, "data/almostsorted.txt");
        startTime = currentTimeMillis();
        selectionSort(records, 100000);
        endTime = currentTimeMillis();
        executionTimes[0] = endTime - startTime;

        printf("Processing random100.txt...\n");

        // Get execution time for random100.txt
        readFile(records, "data/random100.txt");
        startTime = currentTimeMillis();
        selectionSort(records, 100);
        endTime = currentTimeMillis();
        executionTimes[1] = endTime - startTime;

        printf("Processing random25000.txt...\n");
        
        // Get execution time for random25000.txt
        readFile(records, "data/random25000.txt");
        startTime = currentTimeMillis();
        selectionSort(records, 25000);
        endTime = currentTimeMillis();
        executionTimes[2] = endTime - startTime;

        printf("Processing random50000.txt...\n");

        // Get execution time for random50000.txt
        readFile(records, "data/random50000.txt");
        startTime = currentTimeMillis();
        selectionSort(records, 50000);
        endTime = currentTimeMillis();
        executionTimes[3] = endTime - startTime;

        printf("Processing random75000.txt...\n");

        // Get execution time for random75000.txt
        readFile(records, "data/random75000.txt");
        startTime = currentTimeMillis();
        selectionSort(records, 75000);
        endTime = currentTimeMillis();
        executionTimes[4] = endTime - startTime;

        printf("Processing random100000.txt...\n");

        // Get execution time for random100000.txt
        readFile(records, "data/random100000.txt");
        startTime = currentTimeMillis();
        selectionSort(records, 100000);
        endTime = currentTimeMillis();
        executionTimes[5] = endTime - startTime;

        printf("Processing totallyreversed.txt...\n");
        
        // Get execution time for totallyreversed.txt
        readFile(records, "data/totallyreversed.txt");
        startTime = currentTimeMillis();
        selectionSort(records, 100000);
        endTime = currentTimeMillis();
        executionTimes[6] = endTime - startTime;
        break;
    
    case 3: // Merge Sort
        printf("Processing almostsorted.txt...\n");

        // Get execution time for almostsorted.txt
        readFile(records, "data/almostsorted.txt");
        startTime = currentTimeMillis();
        mergeSort(records, 0, 99999); // 100000 - 1
        endTime = currentTimeMillis();
        executionTimes[0] = endTime - startTime;

        printf("Processing random100.txt...\n");

        // Get execution time for random100.txt
        readFile(records, "data/random100.txt");
        startTime = currentTimeMillis();
        mergeSort(records, 0, 99); // 100 - 1
        endTime = currentTimeMillis();
        executionTimes[1] = endTime - startTime;

        printf("Processing random25000.txt...\n");

        // Get execution time for random25000.txt
        readFile(records, "data/random25000.txt");
        startTime = currentTimeMillis();
        mergeSort(records, 0, 24999); // 25000 - 1
        endTime = currentTimeMillis();
        executionTimes[2] = endTime - startTime;

        printf("Processing random50000.txt...\n");

        // Get execution time for random50000.txt
        readFile(records, "data/random50000.txt");
        startTime = currentTimeMillis();
        mergeSort(records, 0, 49999); // 50000 - 1
        endTime = currentTimeMillis();
        executionTimes[3] = endTime - startTime;

        printf("Processing random75000.txt...\n");

        // Get execution time for random75000.txt
        readFile(records, "data/random75000.txt");
        startTime = currentTimeMillis();
        mergeSort(records, 0, 74999); // 75000 - 1
        endTime = currentTimeMillis();
        executionTimes[4] = endTime - startTime;

        printf("Processing random100000.txt...\n");

        // Get execution time for random100000.txt
        readFile(records, "data/random100000.txt");
        startTime = currentTimeMillis();
        mergeSort(records, 0, 99999); // 100000 - 1
        endTime = currentTimeMillis();
        executionTimes[5] = endTime - startTime;

        printf("Processing totallyreversed.txt...\n");

        // Get execution time for totallyreversed.txt
        readFile(records, "data/totallyreversed.txt");
        startTime = currentTimeMillis();
        mergeSort(records, 0, 99999); // 100000 - 1
        endTime = currentTimeMillis();
        executionTimes[6] = endTime - startTime;
        break;
    
    case 4: // Bubble sort
        printf("Processing almostsorted.txt...\n");

        // Get execution time for almostsorted.txt
        readFile(records, "data/almostsorted.txt");
        startTime = currentTimeMillis();
        bubbleSort(records, 100000);
        endTime = currentTimeMillis();
        executionTimes[0] = endTime - startTime;

        printf("Processing random100.txt...\n");
        
        // Get execution time for random100.txt
        readFile(records, "data/random100.txt");
        startTime = currentTimeMillis();
        bubbleSort(records, 100);
        endTime = currentTimeMillis();
        executionTimes[1] = endTime - startTime;

        printf("Processing random25000.txt...\n");

        // Get execution time for random25000.txt
        readFile(records, "data/random25000.txt");
        startTime = currentTimeMillis();
        bubbleSort(records, 25000);
        endTime = currentTimeMillis();
        executionTimes[2] = endTime - startTime;

        printf("Processing random50000.txt...\n");

        // Get execution time for random50000.txt
        readFile(records, "data/random50000.txt");
        startTime = currentTimeMillis();
        bubbleSort(records, 50000);
        endTime = currentTimeMillis();
        executionTimes[3] = endTime - startTime;

        printf("Processing random75000.txt...\n");

        // Get execution time for random75000.txt
        readFile(records, "data/random75000.txt");
        startTime = currentTimeMillis();
        bubbleSort(records, 75000);
        endTime = currentTimeMillis();
        executionTimes[4] = endTime - startTime;

        printf("Processing random100000.txt...\n");

        // Get execution time for random100000.txt
        readFile(records, "data/random100000.txt");
        startTime = currentTimeMillis();
        bubbleSort(records, 100000);
        endTime = currentTimeMillis();
        executionTimes[5] = endTime - startTime;

        printf("Processing totallyreversed.txt...\n");

        // Get execution time for totallyreversed.txt
        readFile(records, "data/totallyreversed.txt");
        startTime = currentTimeMillis();
        bubbleSort(records, 100000);
        endTime = currentTimeMillis();
        executionTimes[6] = endTime - startTime;
        break;
    
    case 5:
        readFile(records, "data/random100.txt");
        insertionSort(records, 100);

    case 6:
        readFile(records, "data/random100.txt");
        selectionSort(records, 100);

    case 7:
        readFile(records, "data/random100.txt");
        mergeSort(records, 0, 100-1);

    case 8:
        readFile(records, "data/random100.txt");
        bubbleSort(records, 100);

    case 9: // frequency count of Insertion sort
        printf("Processing almostsorted.txt...\n");
        readFile(records, "data/almostsorted.txt");
        freqCount[0] = 0;
        insertionSortCount(records, 100000, &freqCount[0]);
        
        printf("Processing random100.txt...\n");
        readFile(records, "data/random100.txt");
        freqCount[1] = 0;
        insertionSortCount(records, 100, &freqCount[1]);
        
        printf("Processing random25000.txt...\n");
        readFile(records, "data/random25000.txt");
        freqCount[2] = 0;
        insertionSortCount(records, 25000, &freqCount[2]);
        
        printf("Processing random50000.txt...\n");
        readFile(records, "data/random50000.txt");
        freqCount[3] = 0;
        insertionSortCount(records, 50000, &freqCount[3]);
        
        printf("Processing random75000.txt...\n");
        readFile(records, "data/random75000.txt");
        freqCount[4] = 0;
        insertionSortCount(records, 75000, &freqCount[4]);

        printf("Processing random100000.txt...\n");
        readFile(records, "data/random100000.txt");
        freqCount[5] = 0;
        insertionSortCount(records, 100000, &freqCount[5]);
        
        printf("Processing totallyreversed.txt...\n");
        readFile(records, "data/totallyreversed.txt");
        freqCount[6] = 0;
        insertionSortCount(records, 100000, &freqCount[6]);
        break;

    case 10: // frequency count of Insertion sort
        printf("Processing almostsorted.txt...\n");
        readFile(records, "data/almostsorted.txt");
        freqCount[0] = 0;
        selectionSortCount(records, 100000, &freqCount[0]);
        
        printf("Processing random100.txt...\n");
        readFile(records, "data/random100.txt");
        freqCount[1] = 0;
        selectionSortCount(records, 100, &freqCount[1]);
        
        printf("Processing random25000.txt...\n");
        readFile(records, "data/random25000.txt");
        freqCount[2] = 0;
        selectionSortCount(records, 25000, &freqCount[2]);
    
        printf("Processing random50000.txt...\n");
        readFile(records, "data/random50000.txt");
        freqCount[3] = 0;
        selectionSortCount(records, 50000, &freqCount[3]);
        
        printf("Processing random75000.txt...\n");
        readFile(records, "data/random75000.txt");
        freqCount[4] = 0;
        selectionSortCount(records, 75000, &freqCount[4]);

        printf("Processing random100000.txt...\n");
        readFile(records, "data/random100000.txt");
        freqCount[5] = 0;
        selectionSortCount(records, 100000, &freqCount[5]);
        
        printf("Processing totallyreversed.txt...\n");
        readFile(records, "data/totallyreversed.txt");
        freqCount[6] = 0;
        selectionSortCount(records, 100000, &freqCount[6]);
        break;
    
    case 11: // frequency count of Merge sort
        printf("Processing almostsorted.txt...\n");
        readFile(records, "data/almostsorted.txt");
        freqCount[0] = 0;
        mergeSortCount(records, 0, 100000-1, &freqCount[0]);
        
        printf("Processing random100.txt...\n");
        readFile(records, "data/random100.txt");
        freqCount[1] = 0;
        mergeSortCount(records,0, 100-1, &freqCount[1]);
        
        printf("Processing random25000.txt...\n");
        readFile(records, "data/random25000.txt");
        freqCount[2] = 0;
        mergeSortCount(records, 0, 25000-1, &freqCount[2]);
        
        printf("Processing random50000.txt...\n");
        readFile(records, "data/random50000.txt");
        freqCount[3] = 0;
        mergeSortCount(records, 0, 50000-1, &freqCount[3]);
        
        printf("Processing random75000.txt...\n");
        readFile(records, "data/random75000.txt");
        freqCount[4] = 0;
        mergeSortCount(records, 0, 75000-1, &freqCount[4]);

        printf("Processing random100000.txt...\n");
        readFile(records, "data/random100000.txt");
        freqCount[5] = 0;
        mergeSortCount(records, 0, 100000-1, &freqCount[5]);
        
        printf("Processing totallyreversed.txt...\n");
        readFile(records, "data/totallyreversed.txt");
        freqCount[6] = 0;
        mergeSortCount(records, 0, 100000-1, &freqCount[6]);
        break;
        
    case 12: // frequency count of Bubble sort
        printf("Processing almostsorted.txt...\n");
        readFile(records, "data/almostsorted.txt");
        freqCount[0] = 0;
        bubbleSortCount(records, 100000, &freqCount[0]);
        
        printf("Processing random100.txt...\n");
        readFile(records, "data/random100.txt");
        freqCount[1] = 0;
        bubbleSortCount(records, 100, &freqCount[1]);
        
        printf("Processing random25000.txt...\n");
        readFile(records, "data/random25000.txt");
        freqCount[2] = 0;
        bubbleSortCount(records, 25000, &freqCount[2]);
        
        printf("Processing random50000.txt...\n");
        readFile(records, "data/random50000.txt");
        freqCount[3] = 0;
        bubbleSortCount(records, 50000, &freqCount[3]);
        
        printf("Processing random75000.txt...\n");
        readFile(records, "data/random75000.txt");
        freqCount[4] = 0;
        bubbleSortCount(records, 75000, &freqCount[4]);

        printf("Processing random100000.txt...\n");
        readFile(records, "data/random100000.txt");
        freqCount[5] = 0;
        bubbleSortCount(records, 100000, &freqCount[5]);
        
        printf("Processing totallyreversed.txt...\n");
        readFile(records, "data/totallyreversed.txt");
        freqCount[6] = 0;
        bubbleSortCount(records, 100000, &freqCount[6]);
        break;
        
    default:
        break;
    }

    switch (input) // Output for the results
    {
    case 1:
    case 2:
    case 3:
    case 4:
        printf("Execution times:\n");
        printf("almostsorted.txt: %ld\n", executionTimes[0]);
        printf("random100.txt: %ld\n", executionTimes[1]);
        printf("random25000.txt: %ld\n", executionTimes[2]);
        printf("random50000.txt: %ld\n", executionTimes[3]);
        printf("random75000.txt: %ld\n", executionTimes[4]);
        printf("random100000.txt: %ld\n", executionTimes[5]);
        printf("totallyreversed.txt: %ld\n", executionTimes[6]);
        break;
    
    case 5:
    case 6:
    case 7:
    case 8:
        for(int i = 0; i < 100; i++)
            printf("%d %s\n", records[i].idNumber, records[i].name);
        break;

    case 9:
    case 10:
    case 11:
    case 12:
        printf("Empirical Frequency Count:\n");
        printf("almostsorted.txt: %lu\n", freqCount[0]);
        printf("random100.txt: %lu\n", freqCount[1]);
        printf("random25000.txt: %lu\n", freqCount[2]);
        printf("random50000.txt: %lu\n", freqCount[3]);
        printf("random75000.txt: %lu\n", freqCount[4]);
        printf("random100000.txt: %lu\n", freqCount[5]);
        printf("totallyreversed.txt: %lu\n", freqCount[6]);
        break;
    default:
        break;
    }
    

    return 0;
}