#include <iostream>
#include "utils.h"
#include "selectionSort.h"
#include "bubbleSort.h"
#include "quicksort.h"

int main()
{
    const int arraySize = 100;

    float array[arraySize] = {};

    fillRandomArray(array, arraySize);

    printArray(array, arraySize);

    selectionSort(array, arraySize);

    std::cout << "Is the array sorted?" << std::boolalpha << "  "<<
            checkSorted(array, arraySize) << std::endl;

    printArray(array, arraySize);
}
