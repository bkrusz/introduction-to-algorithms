#include <iostream>
using namespace std;

void insertion_sort_nondecreasing(int *array, int arraySize){
  for(int i = 1; i < arraySize; i++){
    int key = array[i];

    int j = i - 1;
    while(j >= 0 && array[j] > key){
      array[j + 1] = array[j];
      j = j - 1;
    }

    array[j + 1] = key;
  }
}

void insertion_sort_nonincreasing(int *array, int arraySize){
  for(int i = 1; i < arraySize; i++){
    int key = array[i];

    int j = i - 1;
    while(j >= 0 && array[j] < key){
      array[j + 1] = array[j];
      j = j - 1;
    }

    array[j + 1] = key;
  }
}

int main(){
  int arraySize;
  int *array_nondecreasing;
  int *array_nonincreasing;

  cout << "Enter array size: ";
  cin >> arraySize;

  array_nondecreasing = (int *) malloc(arraySize * sizeof(int));
  array_nonincreasing = (int *) malloc(arraySize * sizeof(int));

  cout << "Enter numbers to be sorted, separated by a space: ";
  for(int i = 0; i < arraySize; i++){
    int input;
    cin >> input;
    array_nondecreasing[i] = input;
    array_nonincreasing[i] = input;
  }

  insertion_sort_nondecreasing(array_nondecreasing, arraySize);
  insertion_sort_nonincreasing(array_nonincreasing, arraySize);

  for(int i = 0; i < arraySize; i++){
    cout << array_nondecreasing[i];
  }

  cout << '\n';
  for(int i = 0; i < arraySize; i++){
    cout << array_nonincreasing[i];
  }
  cout << '\n';
}