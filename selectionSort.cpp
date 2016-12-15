#include <iostream>
#include <iomanip>
#include "selectionSort.h"
using namespace std;

void swap(int * const element1Ptr, int * const element2Ptr)
{
    int hold = *element1Ptr;
    *element1Ptr = *element2Ptr;
    *element2Ptr = hold;
}

void selectionSort(int * const array, const int size)
{
    int smallest;

    for (int i = 0; i < size; i++) {
        smallest = i;
        for (int index = i + 1; index < size; ++index) {
            if (array[index] < array[smallest]) {
                smallest = index;
            }
        }
        swap(&array[i], &array[smallest]);
    }
}
