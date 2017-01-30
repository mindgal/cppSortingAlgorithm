#ifndef UTILS_H_
#define UTILS_H_

#include <iomanip>
#include <iostream>

void fillRandomArray(int array[], const int size);
void fillRandomArray(float array[], const int size);

template<typename T>
bool checkSorted(const T array[], const int size)
{
    for (int i = 0; i < size - 1; i++) {
        if (array[i] > array[i + 1]) {
            return false;
        }
    }
    return true;
}

template<typename T>
void printArray(const T array[], const int size)
{
    for (int i = 0; i < size; i++) {
        std::cout << std::setw(3) << array[i] << "  ";
        if((i + 1) % 10 == 0) {
            std::cout << '\n';
        }
    }
}

#endif /* UTILS_H_ */
