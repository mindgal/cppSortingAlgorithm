/*
 * bubbleSort.cpp
 *
 *  Created on: Dec 15, 2016
 *      Author: teo
 */

void bubbleSort(int array[], const int size)
{
    int temp = 0;

    for (int i = size - 1; i > 0; i--) {

        for (int j = 0; j < i; j++) {
            if (array[j] > array[j + 1]){
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
