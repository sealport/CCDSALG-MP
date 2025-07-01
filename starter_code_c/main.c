#include "record.c"
#include "sortingalgorithms.c"
#include "filereader.c"
#include "timer.c"
#include <stdio.h>
#include <string.h>

int main()
{
    Record records[100];

    readFile(records, "C:\\Users\\Laptop\\Documents\\GitHub\\CCDSALG-MP\\starter_code_c\\data\\random100.txt");

    selectionSort(records, 100);

    for(int i = 0; i < 100; i++) {
        printf("Id: %d, Name: %s\n", records[i].idNumber, records[i].name);
    }

    return 0;
}