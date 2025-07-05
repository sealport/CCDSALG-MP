#include "record.c"
#include "sortingalgorithms.c"
#include "filereader.c"
#include "timer.c"
#include <stdio.h>
#include <string.h>

int main()
{
    Record almostsorted[100000];
    Record random100[100];
    Record random25000[25000];
    Record random50000[50000];
    Record random75000[75000];
    Record random100000[100000];
    Record totallyreversed[100000];
    int input;
    
    printf("Options:\n");
    printf("1 - Insertion Sort\n");
    printf("2 - Selection Sort\n");
    printf("3 - Merge Sort\n");
    printf("4 - Bubble Sort\n");

    printf("Choice: ");
    scanf("%d", &input);
    
    readFile(almostsorted, "data/almostsorted.txt");
    readFile(random100, "data/random100.txt");
    readFile(random25000, "data/random25000.txt");
    readFile(random50000, "data/random50000.txt");
    readFile(random75000, "data/random75000.txt");
    readFile(random100000, "data/random100000.txt");

    long startTime, endTime; 

    // Sizes in order: 100000, 100, 25000, 50000, 75000, 100000
    long executionTimes[6];

    switch (input)
    {
    case 1: // Insertion sort
        // Get execution time for almostsorted.txt
        startTime = currentTimeMillis();
        insertionSort(almostsorted, 100000);
        endTime = currentTimeMillis();
        executionTimes[0] = endTime - startTime;

        // Get execution time for random100.txt
        startTime = currentTimeMillis();
        insertionSort(random100, 100);
        endTime = currentTimeMillis();
        executionTimes[1] = endTime - startTime;

        // Get execution time for random25000.txt
        startTime = currentTimeMillis();
        insertionSort(random25000, 25000);
        endTime = currentTimeMillis();
        executionTimes[2] = endTime - startTime;

        // Get execution time for random50000.txt
        startTime = currentTimeMillis();
        insertionSort(random50000, 50000);
        endTime = currentTimeMillis();
        executionTimes[3] = endTime - startTime;

        // Get execution time for random75000.txt
        startTime = currentTimeMillis();
        insertionSort(random75000, 100000);
        endTime = currentTimeMillis();
        executionTimes[0] = endTime - startTime;

        // Get execution time for random100000.txt
        startTime = currentTimeMillis();
        insertionSort(random100000, 100000);
        endTime = currentTimeMillis();
        executionTimes[0] = endTime - startTime;
        break;

    case 2: // Selection sort
        // Get execution time for almostsorted.txt
        startTime = currentTimeMillis();
        selectionSort(almostsorted, 100000);
        endTime = currentTimeMillis();
        executionTimes[0] = endTime - startTime;

        // Get execution time for random100.txt
        startTime = currentTimeMillis();
        selectionSort(random100, 100);
        endTime = currentTimeMillis();
        executionTimes[1] = endTime - startTime;

        // Get execution time for random25000.txt
        startTime = currentTimeMillis();
        selectionSort(random25000, 25000);
        endTime = currentTimeMillis();
        executionTimes[2] = endTime - startTime;

        // Get execution time for random50000.txt
        startTime = currentTimeMillis();
        selectionSort(random50000, 50000);
        endTime = currentTimeMillis();
        executionTimes[3] = endTime - startTime;

        // Get execution time for random75000.txt
        startTime = currentTimeMillis();
        selectionSort(random75000, 100000);
        endTime = currentTimeMillis();
        executionTimes[0] = endTime - startTime;

        // Get execution time for random100000.txt
        startTime = currentTimeMillis();
        selectionSort(random100000, 100000);
        endTime = currentTimeMillis();
        executionTimes[0] = endTime - startTime;
        break;
    
    case 3: // Merge Sort
        // Get execution time for almostsorted.txt
        startTime = currentTimeMillis();
        insertionSort(almostsorted, 100000);
        endTime = currentTimeMillis();
        executionTimes[0] = endTime - startTime;

        // Get execution time for random100.txt
        startTime = currentTimeMillis();
        insertionSort(random100, 100);
        endTime = currentTimeMillis();
        executionTimes[1] = endTime - startTime;

        // Get execution time for random25000.txt
        startTime = currentTimeMillis();
        insertionSort(random25000, 25000);
        endTime = currentTimeMillis();
        executionTimes[2] = endTime - startTime;

        // Get execution time for random50000.txt
        startTime = currentTimeMillis();
        insertionSort(random50000, 50000);
        endTime = currentTimeMillis();
        executionTimes[3] = endTime - startTime;

        // Get execution time for random75000.txt
        startTime = currentTimeMillis();
        insertionSort(random75000, 100000);
        endTime = currentTimeMillis();
        executionTimes[0] = endTime - startTime;

        // Get execution time for random100000.txt
        startTime = currentTimeMillis();
        insertionSort(random100000, 100000);
        endTime = currentTimeMillis();
        executionTimes[0] = endTime - startTime;
        break;
    
    case 4: // Bubble sort
        // Get execution time for almostsorted.txt
        startTime = currentTimeMillis();
        bubbleSort(almostsorted, 100000);
        endTime = currentTimeMillis();
        executionTimes[0] = endTime - startTime;

        // Get execution time for random100.txt
        startTime = currentTimeMillis();
        bubbleSort(random100, 100);
        endTime = currentTimeMillis();
        executionTimes[1] = endTime - startTime;

        // Get execution time for random25000.txt
        startTime = currentTimeMillis();
        bubbleSort(random25000, 25000);
        endTime = currentTimeMillis();
        executionTimes[2] = endTime - startTime;

        // Get execution time for random50000.txt
        startTime = currentTimeMillis();
        bubbleSort(random50000, 50000);
        endTime = currentTimeMillis();
        executionTimes[3] = endTime - startTime;

        // Get execution time for random75000.txt
        startTime = currentTimeMillis();
        bubbleSort(random75000, 100000);
        endTime = currentTimeMillis();
        executionTimes[0] = endTime - startTime;

        // Get execution time for random100000.txt
        startTime = currentTimeMillis();
        bubbleSort(random100000, 100000);
        endTime = currentTimeMillis();
        executionTimes[0] = endTime - startTime;
        break;
    
    default:
        break;
    }
    
    readFile(almostsorted, "data/almostsorted.txt");
    readFile(random100, "data/random100.txt");
    readFile(random25000, "data/random25000.txt");
    readFile(random50000, "data/random50000.txt");
    readFile(random75000, "data/random75000.txt");
    readFile(random100000, "data/random100000.txt");

    printf("Execution times:\n");
    printf("almostsorted.txt: %ld\n", executionTimes[0]);
    printf("random100.txt: %ld\n", executionTimes[1]);
    printf("random25000.txt: %ld\n", executionTimes[2]);
    printf("random50000.txt: %ld\n", executionTimes[3]);
    printf("random75000.txt: %ld\n", executionTimes[4]);
    printf("random100000.txt: %ld\n", executionTimes[5]);

    return 0;
}