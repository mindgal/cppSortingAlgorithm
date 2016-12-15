#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "selectionSort.h"
#include "bubbleSort.h"

void fillRandomArray(int array[], const int size);
bool checkSorted(const int array[], const int size);
void printArray(const int array[], const int size);

int main()
{
    const int arraySize = 100;

    int array[arraySize] = {};

    fillRandomArray(array, arraySize);

    printArray(array, arraySize);

    bubbleSort(array, arraySize);

    std::cout << "Is the array sorted?" << std::boolalpha << "  "<<
            checkSorted(array, arraySize) << std::endl;

    printArray(array, arraySize);
}

void fillRandomArray(int array[], const int size)
{
    srand(time(0));

    for (int i = 0; i < size; i++) {
        array[i] = rand() % 1000;
    }
}

bool checkSorted(const int array[], const int size)
{
    for (int i = 0; i < size - 1; i++) {
        if (array[i] > array[i + 1]) {
            return false;
        }
    }
    return true;
}

void printArray(const int array[], const int size)
{
    for (int i = 0; i < size; i++) {
        std::cout << std::setw(3) << array[i] << "  ";
        if((i + 1) % 10 == 0) {
            std::cout << '\n';
        }
    }
}
