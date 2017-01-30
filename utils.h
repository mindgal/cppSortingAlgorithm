#ifndef UTILS_H_
#define UTILS_H_

#include <iomanip>
#include <iostream>
#include <cstdlib>

template<typename T>
void fillRandomArray(T array[], const int size)
{
    srand(time(0));

    for (int i = 0; i < size; i++) {
        array[i] = static_cast<float> (rand()) / static_cast <float> (RAND_MAX / 1000.0);
    }
}

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
        std::cout << std::setw(10) << array[i] << "  ";
        if((i + 1) % 10 == 0) {
            std::cout << '\n';
        }
    }
}

#endif /* UTILS_H_ */
