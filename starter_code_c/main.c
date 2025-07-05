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
    
    int input;
    printf("Options:\n");
    printf("1 - Insertion Sort\n");
    printf("2 - Selection Sort\n");
    printf("3 - Merge Sort\n");
    printf("4 - Bubble Sort\n");

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
    
    default:
        break;
    }

    printf("Execution times:\n");
    printf("almostsorted.txt: %ld\n", executionTimes[0]);
    printf("random100.txt: %ld\n", executionTimes[1]);
    printf("random25000.txt: %ld\n", executionTimes[2]);
    printf("random50000.txt: %ld\n", executionTimes[3]);
    printf("random75000.txt: %ld\n", executionTimes[4]);
    printf("random100000.txt: %ld\n", executionTimes[5]);
    printf("totallyreversed.txt: %ld\n", executionTimes[6]);

    return 0;
}