#ifndef SELECTIONSORT_H_
#define SELECTIONSORT_H_


template<typename T>
void swap(T * const element1Ptr, T * const element2Ptr)
{
    int hold = *element1Ptr;
    *element1Ptr = *element2Ptr;
    *element2Ptr = hold;
}

template<typename T>
void selectionSort(T * const array, const int size)
{
  int smallest;

  for (int i = 0; i < size; ++i)
  {
    smallest = i;
    for (int index = i + 1; index < size; ++index)
    {
      if (array[index] < array[smallest])
      {
        smallest = index;
      }
    }
    swap(&array[i], &array[smallest]);
  }
}

#endif /* SELECTIONSORT_H_ */
