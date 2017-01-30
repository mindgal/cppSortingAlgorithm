#include "quicksort.h"

void quicksort(int array[], int left, int right)
{
  if (left >= right) {
    return;
  } else {
    int pivot = partition(array, left, right);
    quicksort(array, left, pivot - 1);
    quicksort(array, pivot + 1, right);
  }
}

int partition(int array[], int left, int right)
{
  int pivot = array[right];
  int pivIdx = right;
  while (left < right) {
    while (array[left] < pivot && left < right) {
      left++;
    }

    while (array[right] >= pivot && right > left) {
      right--;
    }
    if (left < right){
      swap(array, left, right);
    }
  }
  swap(array, right, pivIdx);

  return right;

}

void swap(int array[], int i, int j)
{
  int temp = array[i];
  array[i] = array[j];
  array[j] = temp;
}
