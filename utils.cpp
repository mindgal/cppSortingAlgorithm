#include <iostream>
#include <cstdlib>

void fillRandomArray(int array[], const int size)
{
    srand(time(0));

    for (int i = 0; i < size; i++) {
        array[i] = rand() % 1000;
    }
}

void fillRandomArray(float array[], const int size)
{
    srand(time(0));

    for (int i = 0; i < size; i++) {
        array[i] = static_cast<float> (rand()) / static_cast <float> (RAND_MAX / 1000.0);
    }
}
