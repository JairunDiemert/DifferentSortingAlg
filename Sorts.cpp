//File: Sorts.cpp
//Author: Jairuhigh Diemert
//Class: COP3530
//Project: Class work
//Description: This is the member function file for Sorts.

#include <iostream>
using namespace std;

#include "Sorts.h"

int Sorts::positionPivot (int A[], int low, int high)  
{  
  int pivot = A[high]; 
  int i = (low - 1);
    for (int j = low; j < high; j++)  
    {  
     if (A[j] < pivot)  
      {  
        i++;
        swap(A[i], A[j]);  
      }  
    }  
    swap(A[i + 1], A[high]);  
    return (i + 1);  
}  

void Sorts::quickSort(int A[], int low, int high){
  if (low < high)  
  {  
    int pivotIndex = positionPivot(A, low, high);   
    quickSort(A, low, pivotIndex - 1);  
    quickSort(A, pivotIndex + 1, high);  
  } 
}

void Sorts::merge(int A[], int leftIndex, int middleIndex, int rightIndex) 
{ 
  int n1 = middleIndex - leftIndex + 1; 
  int n2 = rightIndex - middleIndex; 

  int tempLeft[n1];
  int tempRight[n2]; 

  for (int i = 0; i < n1; i++) 
    tempLeft[i] = A[leftIndex + i]; 
  for (int i = 0; i < n2; i++) 
    tempRight[i] = A[middleIndex + 1 + i]; 

  int i = 0; 
  int j = 0;
  int k = leftIndex; 
  while (i < n1 && j < n2) 
  { 
    if (tempLeft[i] <= tempRight[j]) 
    { 
      A[k] = tempLeft[i]; 
      i++; 
    } 
    else
    { 
      A[k] = tempRight[j]; 
      j++; 
    } 
    k++; 
  } 

  while (i < n1) 
  { 
      A[k] = tempLeft[i]; 
      i++; 
      k++; 
  } 

  while (j < n2) 
  { 
      A[k] = tempRight[j]; 
      j++; 
      k++; 
  } 
} 
  
void Sorts::mergeSort(int A[], int leftIndex, int rightIndex) 
{ 
  if (leftIndex < rightIndex) 
  { 
    int middleIndex = leftIndex + (rightIndex - leftIndex) / 2; 
    mergeSort(A, leftIndex, middleIndex); 
    mergeSort(A, middleIndex + 1, rightIndex); 
    merge(A, leftIndex, middleIndex, rightIndex); 
  } 
} 

void Sorts::printArray(int A[], int size){  
  for (int i = 0; i < size; i++)  
    cout << A[i] << " ";  
  cout << endl;
}  

void Sorts::selectionSort(int A[], int high)  
{  
  int i;
  int j;
  int minElement;

  for (i = 0; i < high - 1; i++)  
  {  
    minElement = i;  
    for (j = i + 1; j < high; j++){  
    if (A[j] < A[minElement])  
      minElement = j;  
    } 
    swap(A[minElement], A[i]);  
  }  
}  
void Sorts::shellSort(int A[], int high) 
{ 
  for (int gap = high/2; gap > 0; gap /= 2) 
  {  
    for (int i = gap; i < high; i += 1) 
    { 
      int temp = A[i]; 
      int j;             
      for (j = i; j >= gap && A[j - gap] > temp; j -= gap) 
          A[j] = A[j - gap]; 
      A[j] = temp; 
    } 
  } 
} 
void Sorts::insertionSort(int A[], int high)  
{  
  int i; 
  int key;
  int j;  
  for (i = 1; i < high; i++) 
  {  
    key = A[i];  
    j = i - 1;  
    while (j >= 0 && A[j] > key) 
    {  
      A[j + 1] = A[j];  
      j = j - 1;  
    }  
    A[j + 1] = key;  
  }  
}  
